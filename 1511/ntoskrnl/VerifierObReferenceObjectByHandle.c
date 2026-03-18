/*
 * XREFs of VerifierObReferenceObjectByHandle @ 0x1406D0B48
 * Callers:
 *     <none>
 * Callees:
 *     _ObReferenceObjectByHandle @ 0x1400CF2FC (_ObReferenceObjectByHandle.c)
 *     PsIsSystemThread @ 0x1400E1940 (PsIsSystemThread.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierObReferenceObjectByHandle(
        ULONG_PTR a1,
        ACCESS_MASK a2,
        struct _OBJECT_TYPE *a3,
        KPROCESSOR_MODE a4,
        PVOID *a5,
        struct _OBJECT_HANDLE_INFORMATION *a6)
{
  NTSTATUS v9; // eax
  unsigned int v10; // ebp
  ULONG_PTR v11; // r8
  ULONG_PTR v12; // rdx

  v9 = pXdvObReferenceObjectByHandle((void *)a1, a2, a3, a4, a5, a6);
  v10 = v9;
  if ( (v9 == -1073741816 || v9 == -1073741788)
    && (!a4 || PsIsSystemThread(KeGetCurrentThread()))
    && (MmVerifierData & 0x800) != 0 )
  {
    if ( !a1 )
    {
      v11 = 0LL;
      v12 = 245LL;
LABEL_13:
      VerifierBugCheckIfAppropriate(0xC4u, v12, v11, (ULONG_PTR)a3, 0LL);
      return v10;
    }
    if ( !a4 || (a1 & 0xFFFFFFFF80000000uLL) == 0 || a1 >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      v11 = a1;
      v12 = 60LL;
      goto LABEL_13;
    }
    VerifierBugCheckIfAppropriate(0xC4u, 0xF7uLL, a1, (ULONG_PTR)a3, a4);
  }
  return v10;
}
