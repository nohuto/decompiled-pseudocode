/*
 * XREFs of IopAllocateFoExtensionsOnCreate @ 0x14046A30C
 * Callers:
 *     IopAllocRealFileObject @ 0x140441980 (IopAllocRealFileObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     IopSetFileObjectExtensionFlag @ 0x140079FF0 (IopSetFileObjectExtensionFlag.c)
 *     IopGetSetSpecificExtension @ 0x14007AF10 (IopGetSetSpecificExtension.c)
 *     ObReferenceObjectByPointer @ 0x14007F7E0 (ObReferenceObjectByPointer.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     IopCheckStackForTransactionSupport @ 0x1401CA2A8 (IopCheckStackForTransactionSupport.c)
 *     PsAcquireSiloHardReference @ 0x14020F3DC (PsAcquireSiloHardReference.c)
 *     PsReleaseSiloHardReference @ 0x14020F458 (PsReleaseSiloHardReference.c)
 */

int __fastcall IopAllocateFoExtensionsOnCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int SetSpecificExtension; // ebx
  __int64 v6; // r14
  __int64 v7; // rdi
  int result; // eax
  _DWORD *v11; // rdi
  __int64 v12; // rsi
  void *v13; // rsi
  __int64 v14; // r9
  __int64 v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // [rsp+60h] [rbp+18h] BYREF

  SetSpecificExtension = -1073741811;
  v6 = a4;
  v7 = a3;
  if ( (*(_DWORD *)(a3 + 144) & 2) != 0 )
  {
    LOBYTE(a3) = 1;
    result = IopSetFileObjectExtensionFlag(a1, 1, a3, a4);
    SetSpecificExtension = result;
    if ( result < 0 )
      return result;
  }
  if ( (*(_DWORD *)(v7 + 144) & 1) != 0 )
  {
    LOBYTE(a4) = 1;
    result = IopGetSetSpecificExtension(a1, 1u, 32LL, a4, &v17, 0LL);
    SetSpecificExtension = result;
    if ( result < 0 )
      return result;
    *v17 = *(_QWORD *)(v7 + 168);
  }
  if ( (*(_DWORD *)(v7 + 144) & 4) != 0 )
  {
    if ( !IopCheckStackForTransactionSupport(a2)
      && (*(_DWORD *)(v7 + 88) != 1 || (*(_BYTE *)(v7 + 70) & 6) != 0 || (a5 & 0xFEEDFF56) != 0)
      && !*(_BYTE *)(v7 + 129) )
    {
      return -1072103361;
    }
    v12 = *(_QWORD *)(v7 + 176);
    if ( !v12 )
      return -1073741811;
    if ( *(_WORD *)v12 != 16 )
      return -1073741811;
    v13 = *(void **)(v12 + 8);
    if ( !v13 )
      return -1073741811;
    result = ObReferenceObjectByPointer(v13, 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 0);
    if ( result < 0 )
      return result;
    LOBYTE(v14) = 1;
    SetSpecificExtension = IopGetSetSpecificExtension(a1, 0, 16LL, v14, &v17, 0LL);
    if ( SetSpecificExtension < 0 )
    {
      ObfDereferenceObject(v13);
      return SetSpecificExtension;
    }
    *(_OWORD *)v17 = *(_OWORD *)*(_QWORD *)(v7 + 176);
  }
  if ( (*(_DWORD *)(v7 + 144) & 0x40) == 0 && PsIsHostSilo(*(_QWORD *)(v6 + 8)) )
    return SetSpecificExtension;
  v11 = *(_DWORD **)(v6 + 8);
  SetSpecificExtension = 0;
  if ( PsIsHostSilo((__int64)v11) )
    return SetSpecificExtension;
  result = PsAcquireSiloHardReference(v11);
  if ( result >= 0 )
  {
    LOBYTE(v15) = 1;
    SetSpecificExtension = IopGetSetSpecificExtension(a1, 7u, 16LL, v15, &v17, 0LL);
    if ( SetSpecificExtension >= 0 )
    {
      v16 = v17;
      *(_DWORD *)v17 = 16;
      v16[1] = v11;
      *((_DWORD *)v16 + 1) |= 1u;
      ObfReferenceObjectWithTag(v11, 0x70536F49u);
    }
    else
    {
      PsReleaseSiloHardReference(v11);
    }
    return SetSpecificExtension;
  }
  return result;
}
