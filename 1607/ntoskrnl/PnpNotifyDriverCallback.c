/*
 * XREFs of PnpNotifyDriverCallback @ 0x14052C110
 * Callers:
 *     PnpNotifyTargetDeviceChange @ 0x1403F0314 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x1403F0E40 (PnpNotifyDeviceClassChange.c)
 *     IoRegisterPlugPlayNotification @ 0x14052BB14 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyHwProfileChange @ 0x14062BB04 (PnpNotifyHwProfileChange.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140013C40 (MmIsSessionAddress.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x1400764B8 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007651C (MmAttachSession.c)
 *     MmGetSessionById @ 0x1400765C0 (MmGetSessionById.c)
 *     PsGetCurrentProcessSessionId @ 0x1400FB920 (PsGetCurrentProcessSessionId.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B3B4 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

__int64 __fastcall PnpNotifyDriverCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 (__fastcall *v3)(__int64, _QWORD); // rdi
  BOOL IsSessionAddress; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int8 CurrentIrql; // r13
  unsigned __int8 v11; // r15
  LONG SpareLong; // r12d
  unsigned int CombinedApcDisable; // ebp
  int v14; // eax
  int v15; // edi
  ULONG_PTR SessionById; // rax
  void *v18; // rsi
  int v19; // eax
  __int64 v20; // rcx
  _WORD *v21; // rcx
  _BYTE v23[48]; // [rsp+38h] [rbp-70h] BYREF

  v3 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32);
  IsSessionAddress = MmIsSessionAddress((unsigned __int64)v3);
  if ( !IsSessionAddress || *(_QWORD *)(a1 + 24) )
  {
    CurrentIrql = 0;
    v11 = 0;
    SpareLong = 0;
    CombinedApcDisable = 0;
    if ( !IsSessionAddress
      || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0
      && *(_DWORD *)(a1 + 20) == (unsigned int)PsGetCurrentProcessSessionId() )
    {
      CurrentIrql = KeGetCurrentIrql();
      SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
      v14 = v3(a2, *(_QWORD *)(a1 + 40));
      v11 = KeGetCurrentIrql();
      CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
      if ( a3 )
        *a3 = v14;
      v15 = 0;
    }
    else
    {
      SessionById = MmGetSessionById(*(_DWORD *)(a1 + 20), v8, v9);
      v18 = (void *)SessionById;
      if ( !SessionById )
        return (unsigned int)-1073741823;
      v15 = MmAttachSession(SessionById);
      if ( v15 >= 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
        v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a2, *(_QWORD *)(a1 + 40));
        v11 = KeGetCurrentIrql();
        CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
        if ( a3 )
          *a3 = v19;
        v15 = MmDetachSession((__int64)v18, (__int64)v23);
      }
      ObfDereferenceObject(v18);
    }
    if ( CurrentIrql != v11 || SpareLong != CombinedApcDisable )
    {
      v20 = *(_QWORD *)(a1 + 48);
      if ( v20 )
      {
        IoAddTriageDumpDataBlock(v20, *(__int16 *)(v20 + 2));
        v21 = (_WORD *)(*(_QWORD *)(a1 + 48) + 56LL);
        if ( *v21 )
        {
          IoAddTriageDumpDataBlock((int)v21, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 56LL));
        }
      }
      KeBugCheckEx(0xCAu, 0xAuLL, *(_QWORD *)(a1 + 48), v11, CombinedApcDisable);
    }
    return (unsigned int)v15;
  }
  return 3221225485LL;
}
