/*
 * XREFs of KeyboardClassRead @ 0x1C0002690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00018D0 (WPP_RECORDER_SF_qq.c)
 *     KeyboardClassReadCopyData @ 0x1C0004AF0 (KeyboardClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005388 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KeyboardClassRead(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rsi
  unsigned int CopyData; // ebp
  unsigned int v7; // eax
  NTSTATUS v8; // edi
  char v9; // r14
  KIRQL v10; // r15
  __int64 **v11; // r9
  __int64 *v12; // r8
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 v16; // rdx

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v4 = *(_QWORD *)(v2 + 184);
  v5 = *(_QWORD *)(a1 + 64);
  CopyData = 259;
  v7 = *(_DWORD *)(v4 + 8);
  if ( v7 )
  {
    if ( v7 == 12 * (v7 / 0xCuLL) )
    {
      if ( *(_BYTE *)(v5 + 363) )
      {
        v8 = -1073741667;
      }
      else if ( DriverEntry == *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(*(_QWORD *)(v4 + 48) + 32LL) )
      {
        v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), (PVOID)v2, &File, 1u, 0x20u);
        if ( v8 >= 0 )
          v8 = 259;
      }
      else
      {
        v8 = -1073741727;
      }
    }
    else
    {
      v8 = -1073741789;
    }
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)(v2 + 48) = v8;
  *(_QWORD *)(v2 + 56) = 0LL;
  if ( v8 == 259 )
  {
    v9 = 0;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 160));
    if ( *(_DWORD *)(v5 + 84) )
    {
      CopyData = KeyboardClassReadCopyData(v5, v2);
      *(_DWORD *)(v2 + 48) = CopyData;
    }
    else
    {
      v11 = *(__int64 ***)(v5 + 176);
      v12 = (__int64 *)(v2 + 168);
      *(_QWORD *)(v2 + 168) = v5 + 168;
      *(_QWORD *)(v2 + 176) = v11;
      if ( *v11 != (__int64 *)(v5 + 168) )
        __fastfail(3u);
      *v11 = v12;
      *(_QWORD *)(v5 + 176) = v12;
      _InterlockedExchange64((volatile __int64 *)(v2 + 104), (__int64)KeyboardClassCancel);
      if ( !*(_BYTE *)(v2 + 68) )
        goto LABEL_13;
      if ( !_InterlockedExchange64((volatile __int64 *)(v2 + 104), 0LL) )
      {
        WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 3, 3, 45);
LABEL_13:
        *(_BYTE *)(*(_QWORD *)(v2 + 184) + 3LL) |= 1u;
LABEL_14:
        KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 160), v10);
        if ( v9 )
        {
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), (PVOID)v2, 0x20u);
          IofCompleteRequest((PIRP)v2, 0);
        }
        return CopyData;
      }
      v14 = (__int64 *)*v12;
      v15 = *(__int64 ***)(v2 + 176);
      if ( *(__int64 **)(*v12 + 8) != v12 || *v15 != v12 )
        __fastfail(3u);
      *v15 = v14;
      CopyData = -1073741536;
      v14[1] = (__int64)v15;
      *(_DWORD *)(v2 + 48) = -1073741536;
      WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 3, 3, 44);
    }
    v9 = 1;
    goto LABEL_14;
  }
  IofCompleteRequest((PIRP)v2, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v16) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v16, 3LL);
  }
  return (unsigned int)v8;
}
