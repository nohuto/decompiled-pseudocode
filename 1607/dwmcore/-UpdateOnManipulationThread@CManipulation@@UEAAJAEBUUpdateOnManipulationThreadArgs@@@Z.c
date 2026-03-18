/*
 * XREFs of ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@@Z @ 0x1801461C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::StoreIfChanged_float_ @ 0x1801458EC (_anonymous_namespace_--StoreIfChanged_float_.c)
 *     _anonymous_namespace_::StoreIfChanged_D2DVector3_ @ 0x180145908 (_anonymous_namespace_--StoreIfChanged_D2DVector3_.c)
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x180145C68 (-Reset@ManipulationData@@QEAAXXZ.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801466DC (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x180146D28 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

__int64 __fastcall CManipulation::UpdateOnManipulationThread(
        CManipulation *this,
        const struct UpdateOnManipulationThreadArgs *a2)
{
  unsigned int v4; // ebp
  char v5; // si
  __int64 v6; // rcx
  int v7; // ecx
  char v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // si
  char v12; // si
  char v13; // si
  char v14; // si
  char v15; // si
  const struct D2DVector3 *v16; // r11
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // dl
  char v19; // cl
  char v20; // r10
  int v21; // eax

  v4 = 0;
  CManipulation::_UpdateCaptureState(this, (*((_BYTE *)a2 + 4) & 0x20) != 0);
  v5 = 0;
  v7 = *(_DWORD *)(v6 + 252);
  if ( *(_DWORD *)a2 == v7 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 && (unsigned int)(v7 - 2) <= 2 )
    {
      if ( (*((_BYTE *)this + 416) & 1) != 0 )
        ManipulationData::Reset((CManipulation *)((char *)this + 120));
      else
        (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 32LL))(this);
    }
  }
  v9 = *(_QWORD *)((char *)a2 + 20) - 0x3F8000003F800000LL;
  if ( *(_QWORD *)((char *)a2 + 20) == 0x3F8000003F800000LL )
    v9 = *((unsigned int *)a2 + 7) - 1065353216LL;
  if ( v9 )
  {
    v5 = 1;
    *((float *)this + 33) = *((float *)a2 + 5) * *((float *)this + 33);
    *((float *)this + 34) = *((float *)a2 + 6) * *((float *)this + 34);
    *((float *)this + 35) = *((float *)a2 + 7) * *((float *)this + 35);
  }
  v10 = *((_QWORD *)a2 + 1);
  if ( !v10 )
    v10 = *((unsigned int *)a2 + 4);
  if ( v10 )
  {
    v5 = 1;
    *((float *)this + 30) = *((float *)this + 30) + *((float *)a2 + 2);
    *((float *)this + 31) = *((float *)a2 + 3) + *((float *)this + 31);
    *((float *)this + 32) = *((float *)a2 + 4) + *((float *)this + 32);
  }
  v11 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 36, (__int64)this + 224) | v5;
  v12 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 48, (__int64)this + 236) | v11;
  v13 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 64, (__int64)this + 148) | v12;
  v14 = anonymous_namespace_::StoreIfChanged_float_((float *)a2 + 8, (float *)this + 36) | v13;
  v15 = anonymous_namespace_::StoreIfChanged_float_((float *)a2 + 15, (float *)this + 62) | v14;
  if ( v8
    || v15
    || *((_DWORD *)this + 64) != *((_DWORD *)a2 + 19)
    || (v17 = *((_BYTE *)this + 264), v18 = *((_BYTE *)a2 + 4), ((v18 ^ v17) & 1) != 0)
    || ((v18 ^ v17) & 2) != 0
    || ((v18 ^ v17) & 4) != 0
    || ((v18 ^ v17) & 8) != 0
    || ((v18 ^ v17) & 0x10) != 0 )
  {
    *((_DWORD *)this + 63) = *(_DWORD *)a2;
    *((_BYTE *)this + 264) ^= (*((_BYTE *)a2 + 4) ^ *((_BYTE *)this + 264)) & 1;
    v19 = *((_BYTE *)this + 264) ^ (*((_BYTE *)a2 + 4) ^ *((_BYTE *)this + 264)) & 2;
    *((_BYTE *)this + 264) = v19;
    v20 = v19 ^ (*((_BYTE *)a2 + 4) ^ v19) & 4;
    *((_BYTE *)this + 264) = v20;
    *((_DWORD *)this + 64) = *((_DWORD *)a2 + 19);
    *((_BYTE *)this + 264) ^= (*((_BYTE *)a2 + 4) ^ v20) & 8;
    *((_BYTE *)this + 264) ^= (*((_BYTE *)a2 + 4) ^ *((_BYTE *)this + 264)) & 0x10;
    *((_DWORD *)this + 65) = *((_DWORD *)a2 + 20);
    v21 = CManipulation::_SendUpdateToRenderThread(
            this,
            v15,
            v16,
            (const struct UpdateOnManipulationThreadArgs *)((char *)a2 + 20));
    v4 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x73u);
  }
  return v4;
}
