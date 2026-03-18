/*
 * XREFs of IopAllocateFoExtensionsOnCreate @ 0x14048F628
 * Callers:
 *     IopAllocRealFileObject @ 0x140414F70 (IopAllocRealFileObject.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140003910 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     PsIsHostSilo @ 0x140079E50 (PsIsHostSilo.c)
 *     IopSetFileObjectExtensionFlag @ 0x1400CC2B8 (IopSetFileObjectExtensionFlag.c)
 *     IopGetSetSpecificExtension @ 0x1400CC2E8 (IopGetSetSpecificExtension.c)
 *     IopCheckStackForTransactionSupport @ 0x14012F35C (IopCheckStackForTransactionSupport.c)
 */

int __fastcall IopAllocateFoExtensionsOnCreate(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int SetSpecificExtension; // ebx
  int result; // eax
  __int64 v10; // rcx
  void *v11; // rsi
  void *v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // [rsp+60h] [rbp+18h] BYREF

  SetSpecificExtension = -1073741811;
  if ( (*(_DWORD *)(a3 + 144) & 2) != 0 )
  {
    result = IopSetFileObjectExtensionFlag(a1, 1, 1);
    SetSpecificExtension = result;
    if ( result < 0 )
      return result;
  }
  if ( (*(_DWORD *)(a3 + 144) & 1) != 0 )
  {
    result = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &v14, 0LL);
    SetSpecificExtension = result;
    if ( result < 0 )
      return result;
    *v14 = *(_QWORD *)(a3 + 168);
  }
  if ( (*(_DWORD *)(a3 + 144) & 4) != 0 )
  {
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
    if ( result < 0 )
      return result;
    SetSpecificExtension = IopGetSetSpecificExtension(a1, 0, 0x10u, 1, &v14, 0LL);
    if ( SetSpecificExtension < 0 )
    {
      ObfDereferenceObject(v11);
      return SetSpecificExtension;
    }
    *(_OWORD *)v14 = *(_OWORD *)*(_QWORD *)(a3 + 176);
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x40) == 0 && PsIsHostSilo(*(_QWORD *)(a3 + 184)) )
    return SetSpecificExtension;
  v12 = *(void **)(a3 + 184);
  SetSpecificExtension = 0;
  if ( PsIsHostSilo((__int64)v12) )
    return SetSpecificExtension;
  result = IopGetSetSpecificExtension(a1, 7u, 0x10u, 1, &v14, 0LL);
  SetSpecificExtension = result;
  if ( result >= 0 )
  {
    v13 = v14;
    *(_DWORD *)v14 = 16;
    v13[1] = v12;
    ObfReferenceObject(v12);
    return SetSpecificExtension;
  }
  return result;
}
