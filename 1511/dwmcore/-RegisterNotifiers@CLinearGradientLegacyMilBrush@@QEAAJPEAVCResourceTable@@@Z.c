/*
 * XREFs of ?RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180013F58
 * Callers:
 *     ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x1800137D8 (-ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENT.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A19F4 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD *v5; // r8
  __int64 v6; // rax
  unsigned int v7; // edx
  int v8; // eax
  int v9; // edi
  unsigned int v11; // [rsp+20h] [rbp-18h]
  struct CResourceTable *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = CResource::RegisterNotifier((CResource *)this, this[11]);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 3919;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v11);
    return v4;
  }
  v3 = CResource::RegisterNotifier((CResource *)this, this[12]);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 3920;
    goto LABEL_16;
  }
  *((_DWORD *)this + 38) = 0;
  v5 = this + 16;
  v6 = *((unsigned int *)this + 38);
  v12 = 0LL;
  v7 = v6 + 1;
  if ( (int)v6 + 1 < (unsigned int)v6 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v4 = -2147024362;
    goto LABEL_13;
  }
  if ( v7 <= *((_DWORD *)this + 37) )
  {
    *(_QWORD *)(*v5 + 8 * v6) = v12;
    *((_DWORD *)this + 38) = v7;
    goto LABEL_8;
  }
  v8 = DynArrayImpl<1>::AddMultipleAndSet(this + 16, 8LL, v5, &v12);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
  v4 = v9;
  if ( v9 < 0 )
  {
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xF52u);
    return v4;
  }
LABEL_8:
  v3 = CResource::RegisterNotifier((CResource *)this, this[10]);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 3926;
    goto LABEL_16;
  }
  return v4;
}
