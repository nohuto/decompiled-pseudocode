/*
 * XREFs of ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCSnapshot@@@Z @ 0x1801013AC
 * Callers:
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180126B3C (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::RegisterSnapshotToPerform(CComposition *this, struct CSnapshot *a2)
{
  char *v2; // r10
  unsigned int v3; // edi
  struct CSnapshot **v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // ebx
  int v9; // eax
  struct CSnapshot *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (char *)this + 616;
  v3 = 0;
  v4 = (struct CSnapshot **)*((_QWORD *)this + 77);
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
    return v3;
  }
LABEL_4:
  v6 = *((_DWORD *)v2 + 6);
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v3 = -2147024362;
    goto LABEL_11;
  }
  if ( v7 <= *((_DWORD *)v2 + 5) )
  {
    *(_QWORD *)(*(_QWORD *)v2 + 8LL * *((unsigned int *)v2 + 6)) = v11;
    *((_DWORD *)v2 + 6) = v7;
    return v3;
  }
  v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8, 1, &v11);
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  v3 = v8;
  if ( v8 < 0 )
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xE9Eu);
  return v3;
}
