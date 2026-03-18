/*
 * XREFs of ??1CSharedSection@@UEAA@XZ @ 0x18006FB80
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x18006FAA0 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CSharedSection::~CSharedSection(CSharedSection *this)
{
  __int64 v2; // r10
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // eax
  LPCVOID lpBaseAddress; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CSharedSection::`vftable';
  if ( *((_QWORD *)this + 7) )
  {
    v2 = *((_QWORD *)this + 2);
    lpBaseAddress = (LPCVOID)*((_QWORD *)this + 7);
    v3 = *(_DWORD *)(v2 + 728);
    v4 = v3 + 1;
    if ( v3 + 1 < v3 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v4 <= *(_DWORD *)(v2 + 724) )
      {
        *(_QWORD *)(*(_QWORD *)(v2 + 704) + 8LL * v3) = lpBaseAddress;
        *(_DWORD *)(v2 + 728) = v4;
        goto LABEL_5;
      }
      v5 = DynArrayImpl<0>::AddMultipleAndSet(v2 + 704, 8u, 1, &lpBaseAddress);
      if ( v5 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC0u);
    }
    UnmapViewOfFile(lpBaseAddress);
  }
LABEL_5:
  CResource::~CResource(this);
}
