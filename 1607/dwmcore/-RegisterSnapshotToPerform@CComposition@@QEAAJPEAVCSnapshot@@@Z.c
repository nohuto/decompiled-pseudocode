/*
 * XREFs of ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCSnapshot@@@Z @ 0x180116E70
 * Callers:
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180143348 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::RegisterSnapshotToPerform(CComposition *this, struct CSnapshot *a2)
{
  char *v2; // r10
  int v3; // ebx
  struct CSnapshot **v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  struct CSnapshot *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (char *)this + 624;
  v3 = 0;
  v4 = (struct CSnapshot **)*((_QWORD *)this + 78);
  v5 = 0;
  if ( *((_DWORD *)v2 + 6) )
  {
    while ( a2 != *v4 )
    {
      ++v5;
      ++v4;
      if ( v5 >= *((_DWORD *)v2 + 6) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v6 = *((_DWORD *)v2 + 6);
    v7 = v6 + 1;
    if ( v6 + 1 >= v6 )
    {
      if ( v7 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v2 + 8LL * *((unsigned int *)v2 + 6)) = v10;
        *((_DWORD *)v2 + 6) = v7;
        return (unsigned int)v3;
      }
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v10);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xD39u);
  }
  return (unsigned int)v3;
}
