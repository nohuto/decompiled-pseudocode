/*
 * XREFs of ?UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z @ 0x180094D14
 * Callers:
 *     ??1CSharedSection@@UEAA@XZ @ 0x1800AD730 (--1CSharedSection@@UEAA@XZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CComposition::UnmapSharedSectionView(CComposition *this, void *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  int v4; // eax
  LPCVOID lpBaseAddress; // [rsp+48h] [rbp+10h] BYREF

  lpBaseAddress = a2;
  v2 = *((_DWORD *)this + 182);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_8;
  }
  if ( v3 <= *((_DWORD *)this + 181) )
  {
    *(_QWORD *)(*((_QWORD *)this + 88) + 8LL * v2) = lpBaseAddress;
    *((_DWORD *)this + 182) = v3;
    return;
  }
  v4 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 704, 8, 1, &lpBaseAddress);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xC0u);
LABEL_8:
    UnmapViewOfFile(lpBaseAddress);
  }
}
