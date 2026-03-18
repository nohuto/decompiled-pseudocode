/*
 * XREFs of NtLoadEnclaveData @ 0x14065FF84
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E84C (MiCopyPagesIntoEnclave.c)
 */

__int64 __fastcall NtLoadEnclaveData(
        HANDLE Handle,
        __int64 a2,
        void *a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 *a8,
        _DWORD *a9)
{
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20[3]; // [rsp+58h] [rbp-30h] BYREF

  v20[0] = 0LL;
  LODWORD(v18) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v14 = (__int64)a9;
    if ( a9 )
    {
      if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
    v15 = (__int64)a8;
    if ( a8 )
    {
      if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v15 = *(_QWORD *)v15;
    }
  }
  if ( !a4 )
    goto LABEL_11;
  if ( (a2 & 0xFFF) != 0 )
  {
    v16 = -1073741584;
    goto LABEL_22;
  }
  if ( (a4 & 0xFFF) != 0 )
  {
LABEL_11:
    v16 = -1073741582;
    goto LABEL_22;
  }
  if ( a7 )
  {
    v16 = -1073741820;
    goto LABEL_22;
  }
  if ( Handle == (HANDLE)-1LL )
  {
    Object = KeGetCurrentThread()->ApcState.Process;
  }
  else
  {
    v16 = ObReferenceObjectByHandleWithTag(
            Handle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            &Object,
            0LL);
    if ( v16 < 0 )
      goto LABEL_22;
  }
  v16 = MiCopyPagesIntoEnclave((_KPROCESS *)Object, PreviousMode, a2, a3, a4, a5, v20, (__int64)&v18);
  if ( Handle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
LABEL_22:
  if ( a8 )
    *a8 = v20[0];
  if ( a9 )
    *a9 = v18;
  return (unsigned int)v16;
}
