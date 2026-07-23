/*
 * XREFs of ExFreeSvmAsid @ 0x140075618
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExpFreeAsid @ 0x14022EF5C (ExpFreeAsid.c)
 *     ExpSvmDereferenceDevice @ 0x14022F21C (ExpSvmDereferenceDevice.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *ExFreeSvmAsid()
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rdi
  int v2; // esi
  unsigned __int64 v3; // rbp
  unsigned __int64 *v4; // r15
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // rax
  _QWORD *v7; // rbx

  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  v2 = Process[2].ActiveProcessors.Bitmap[1];
  if ( v2 )
  {
    v3 = Process[2].ActiveProcessors.Bitmap[2];
    v4 = &Process[2].ActiveProcessors.Bitmap[5];
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
      ((void (__fastcall *)(unsigned __int64, _QWORD))HalIommuDispatch[6])(v3, v7[13]);
      ExpSvmDereferenceDevice(v7);
      ExFreePoolWithTag(v5, 0);
    }
    ((void (__fastcall *)(unsigned __int64))HalIommuDispatch[8])(v3);
    Process[2].ActiveProcessors.Bitmap[2] = 0LL;
    return (struct _KTHREAD *)ExpFreeAsid((unsigned int)(v2 - 1));
  }
  return result;
}
