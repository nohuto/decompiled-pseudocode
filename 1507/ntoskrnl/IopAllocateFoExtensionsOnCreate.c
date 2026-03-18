/*
 * XREFs of IopAllocateFoExtensionsOnCreate @ 0x1404A58AC
 * Callers:
 *     IopAllocRealFileObject @ 0x140488940 (IopAllocRealFileObject.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140007C50 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IopGetSetSpecificExtension @ 0x14007123C (IopGetSetSpecificExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140071760 (IopAllocateFileObjectExtension.c)
 *     IopCheckStackForTransactionSupport @ 0x14015C7D4 (IopCheckStackForTransactionSupport.c)
 */

int __fastcall IopAllocateFoExtensionsOnCreate(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int FileObjectExtension; // ebx
  int result; // eax
  __int64 v10; // rcx
  void *v11; // rsi
  _DWORD *v12; // [rsp+60h] [rbp+18h] BYREF

  FileObjectExtension = -1073741811;
  if ( (*(_DWORD *)(a3 + 144) & 2) != 0 )
  {
    FileObjectExtension = IopAllocateFileObjectExtension(a1, (__int64 *)&v12);
    if ( FileObjectExtension >= 0 )
    {
      *v12 |= 1u;
      FileObjectExtension = 0;
    }
    if ( FileObjectExtension < 0 )
      return FileObjectExtension;
  }
  if ( (*(_DWORD *)(a3 + 144) & 1) != 0 )
  {
    result = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &v12, 0LL);
    FileObjectExtension = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)v12 = *(_QWORD *)(a3 + 168);
  }
  if ( (*(_DWORD *)(a3 + 144) & 4) == 0 )
    return FileObjectExtension;
  if ( !IopCheckStackForTransactionSupport(a2)
    && (*(_DWORD *)(a3 + 88) != 1 || (*(_BYTE *)(a3 + 70) & 6) != 0 || (a4 & 0xFEEDFF56) != 0)
    && !*(_BYTE *)(a3 + 129) )
  {
    return -1072103361;
  }
  v10 = *(_QWORD *)(a3 + 176);
  if ( !v10 )
    return -1073741811;
  if ( *(_WORD *)v10 != 16 )
    return -1073741811;
  v11 = *(void **)(v10 + 8);
  if ( !v11 )
    return -1073741811;
  result = ObReferenceObjectByPointer(*(PVOID *)(v10 + 8), 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 0);
  if ( result >= 0 )
  {
    FileObjectExtension = IopGetSetSpecificExtension(a1, 0, 0x10u, 1, &v12, 0LL);
    if ( FileObjectExtension < 0 )
      ObfDereferenceObject(v11);
    else
      *(_OWORD *)v12 = *(_OWORD *)*(_QWORD *)(a3 + 176);
    return FileObjectExtension;
  }
  return result;
}
