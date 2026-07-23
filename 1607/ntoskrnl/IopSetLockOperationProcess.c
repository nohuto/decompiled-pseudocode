/*
 * XREFs of IopSetLockOperationProcess @ 0x140078558
 * Callers:
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     NtLockFile @ 0x140469D2C (NtLockFile.c)
 * Callees:
 *     IopGetSetSpecificExtension @ 0x14007AF10 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 *     IopVerifierExAllocatePool @ 0x14007B690 (IopVerifierExAllocatePool.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetLockOperationProcess(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _QWORD *v4; // rbx
  char v5; // si
  unsigned int v9; // edi
  __int64 FileObjectExtension; // r15
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 Pool; // rax
  KSPIN_LOCK *v14; // r13
  KIRQL v15; // al
  __int64 v16; // rdx
  char v17; // bp
  _QWORD *v18; // rcx
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 )
  {
    v9 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1LL, 0LL, a4);
    if ( !FileObjectExtension )
      return 3221225473LL;
LABEL_8:
    v14 = (KSPIN_LOCK *)(a1 + 184);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
    v16 = *(_QWORD *)(FileObjectExtension + 16);
    v17 = *(_BYTE *)(a1 + 72);
    if ( v16 )
    {
      v18 = *(_QWORD **)(FileObjectExtension + 16);
      while ( v18[1] != a2 )
      {
        v18 = (_QWORD *)*v18;
        if ( !v18 )
          goto LABEL_17;
      }
      v5 = 1;
    }
    else
    {
LABEL_17:
      if ( !a3 )
      {
        if ( v4 )
        {
          *v4 = v16;
          *(_QWORD *)(FileObjectExtension + 16) = v4;
          v4[1] = a2;
        }
        else
        {
          v9 = -1073741670;
        }
      }
    }
    KeReleaseSpinLock(v14, v15);
    if ( v5 )
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
    if ( !a3 )
      return v9;
    if ( v17 )
      return v5 == 0 ? 0xC0000001 : 0;
    return 3221225473LL;
  }
  LOBYTE(a4) = 1;
  result = IopGetSetSpecificExtension(a1, 1LL, 32LL, a4, &v19, 0LL);
  v9 = result;
  if ( (int)result >= 0 )
  {
    Pool = IopVerifierExAllocatePool(v12, 16LL);
    FileObjectExtension = v19;
    v4 = (_QWORD *)Pool;
    goto LABEL_8;
  }
  return result;
}
