/*
 * XREFs of ExFreeSvmAsid @ 0x14012A494
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExpFreeAsid @ 0x1402651C0 (ExpFreeAsid.c)
 *     ExpSvmDereferenceDevice @ 0x140265480 (ExpSvmDereferenceDevice.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *ExFreeSvmAsid()
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rdi
  int Next; // esi
  __int64 v3; // rbp
  unsigned __int64 *v4; // r15
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // rax
  _QWORD *v7; // rbx

  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  Next = (int)Process[2].SwapListEntry.Next;
  if ( Next )
  {
    v3 = *(_QWORD *)&Process[2].ActiveProcessors.Count;
    v4 = &Process[2].ActiveProcessors.Bitmap[2];
    while ( 1 )
    {
      v5 = (unsigned __int64 *)*v4;
      v6 = *(_QWORD *)*v4;
      if ( *(unsigned __int64 **)(*v4 + 8) != v4 || *(unsigned __int64 **)(v6 + 8) != v5 )
        __fastfail(3u);
      *v4 = v6;
      *(_QWORD *)(v6 + 8) = v4;
      if ( v5 == v4 )
        break;
      v7 = (_QWORD *)v5[2];
      (*((void (__fastcall **)(__int64, _QWORD))HalIommuDispatch[0] + 6))(v3, v7[13]);
      ExpSvmDereferenceDevice(v7);
      ExFreePoolWithTag(v5, 0);
    }
    (*((void (__fastcall **)(__int64))HalIommuDispatch[0] + 8))(v3);
    *(_QWORD *)&Process[2].ActiveProcessors.Count = 0LL;
    return (struct _KTHREAD *)ExpFreeAsid((unsigned int)(Next - 1));
  }
  return result;
}
