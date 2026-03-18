/*
 * XREFs of ??1CSharedSection@@UEAA@XZ @ 0x1800B0160
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x1800B0040 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CSharedSection::~CSharedSection(CSharedSection *this)
{
  __int64 v2; // r10
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // edi
  int v6; // eax
  LPCVOID lpBaseAddress; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CSharedSection::`vftable';
  if ( *((_QWORD *)this + 16) )
  {
    v2 = *((_QWORD *)this + 2);
    lpBaseAddress = (LPCVOID)*((_QWORD *)this + 16);
    v3 = *(_DWORD *)(v2 + 736);
    v4 = v3 + 1;
    if ( v3 + 1 < v3 )
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v4 <= *(_DWORD *)(v2 + 732) )
      {
        *(_QWORD *)(*(_QWORD *)(v2 + 712) + 8LL * v3) = lpBaseAddress;
        *(_DWORD *)(v2 + 736) = v4;
        goto LABEL_5;
      }
      v6 = DynArrayImpl<0>::AddMultipleAndSet(v2 + 712, 8u, 1, &lpBaseAddress);
      v5 = v6;
      if ( v6 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
    }
    if ( v5 < 0 )
      UnmapViewOfFile(lpBaseAddress);
  }
LABEL_5:
  CResource::~CResource(this);
}
