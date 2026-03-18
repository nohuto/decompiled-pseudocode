/*
 * XREFs of ?RegisterNotifiers@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180118C90
 * Callers:
 *     ?ProcessUpdate@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH@@PEBXI@Z @ 0x180118358 (-ProcessUpdate@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH@@PE.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180051AB0 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLinearGradientBrush::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD *v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // edi
  int v10; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]
  struct CResourceTable *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = CResource::RegisterNotifier((CResource *)this, this[11]);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 3917;
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v11);
    return v4;
  }
  v3 = CResource::RegisterNotifier((CResource *)this, this[12]);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 3918;
    goto LABEL_11;
  }
  v12 = 0LL;
  v5 = this + 16;
  *((_DWORD *)this + 38) = 0;
  v6 = *((_DWORD *)this + 38);
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v4 = -2147024362;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xF50u);
    return v4;
  }
  if ( v7 > *((_DWORD *)this + 37) )
  {
    v10 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(this + 16), 8u, (__int64)v5, &v12);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
    v4 = v8;
    if ( v8 < 0 )
      goto LABEL_16;
  }
  else
  {
    *(_QWORD *)(*v5 + 8LL * *((unsigned int *)this + 38)) = v12;
    *((_DWORD *)this + 38) = v7;
  }
  v3 = CResource::RegisterNotifier((CResource *)this, this[10]);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 3924;
    goto LABEL_11;
  }
  return v4;
}
