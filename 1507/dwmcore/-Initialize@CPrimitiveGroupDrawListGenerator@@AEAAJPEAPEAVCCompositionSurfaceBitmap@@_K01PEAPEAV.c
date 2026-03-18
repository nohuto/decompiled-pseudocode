/*
 * XREFs of ?Initialize@CPrimitiveGroupDrawListGenerator@@AEAAJPEAPEAVCCompositionSurfaceBitmap@@_K01PEAPEAVCResource@@1@Z @ 0x180076B14
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVCCompositionSurfaceBitmap@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x180073154 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVCCompos.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::Initialize(
        CPrimitiveGroupDrawListGenerator *this,
        struct CCompositionSurfaceBitmap **a2,
        unsigned __int64 a3,
        struct CCompositionSurfaceBitmap **a4,
        unsigned __int64 a5,
        struct CResource **a6,
        unsigned __int64 a7)
{
  unsigned int v7; // esi
  unsigned int v8; // r14d
  struct CCompositionSurfaceBitmap **v9; // rax
  unsigned __int64 v13; // r15
  unsigned int v14; // r14d
  __int64 v15; // rbp
  _QWORD *v16; // rdi
  struct CCompositionSurfaceBitmap **v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  int v21; // ebx
  unsigned __int64 v22; // rbp
  unsigned int v23; // r15d
  __int64 v25; // rbp
  char *v26; // rdi
  unsigned int v27; // eax
  struct CCompositionSurfaceBitmap **v28; // r9
  unsigned int v29; // edx
  int v30; // eax
  int v31; // ebx
  struct CResource **v32; // r12
  _QWORD *v33; // r14
  __int64 v34; // rdi
  unsigned int v35; // eax
  unsigned int v36; // edx
  int v37; // eax
  int v38; // ebx
  struct CResource *v39; // [rsp+80h] [rbp+18h] BYREF
  struct CCompositionSurfaceBitmap **v40; // [rsp+88h] [rbp+20h]

  v40 = a4;
  v7 = 0;
  v8 = 0;
  v9 = a4;
  if ( a3 )
  {
    v25 = 0LL;
    v26 = (char *)this + 40;
    while ( 1 )
    {
      v27 = *((_DWORD *)v26 + 6);
      v28 = &a2[v25];
      v29 = v27 + 1;
      if ( v27 + 1 < v27 )
        break;
      v7 = 0;
      if ( v29 <= *((_DWORD *)v26 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v26 + 8LL * *((unsigned int *)v26 + 6)) = *v28;
        *((_DWORD *)v26 + 6) = v29;
      }
      else
      {
        v30 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v26, 8u, 1, v28);
        v31 = v30;
        if ( v30 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xC0u);
        v7 = v31;
        if ( v31 < 0 )
          goto LABEL_24;
      }
      CBitmapOfDeviceBitmaps::AddRef(*(CBitmapOfDeviceBitmaps **)(*(_QWORD *)v26 + 8 * v25));
      v25 = ++v8;
      if ( v8 >= a3 )
      {
        v9 = v40;
        goto LABEL_2;
      }
    }
    v31 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v7 = -2147024362;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x10Bu);
  }
  else
  {
LABEL_2:
    v13 = a5;
    v14 = 0;
    if ( a5 )
    {
      v15 = 0LL;
      v16 = (_QWORD *)((char *)this + 72);
      while ( 1 )
      {
        v17 = &v9[v15];
        v18 = *((_DWORD *)this + 24);
        v19 = v18 + 1;
        if ( v18 + 1 < v18 )
          break;
        v7 = 0;
        if ( v19 <= *((_DWORD *)this + 23) )
        {
          *(_QWORD *)(*v16 + 8LL * *((unsigned int *)this + 24)) = *v17;
          *((_DWORD *)this + 24) = v19;
        }
        else
        {
          v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 72, 8u, 1, v17);
          v21 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
          v7 = v21;
          if ( v21 < 0 )
            goto LABEL_26;
        }
        CBitmapOfDeviceBitmaps::AddRef(*(CBitmapOfDeviceBitmaps **)(*v16 + 8 * v15));
        v15 = ++v14;
        if ( v14 >= v13 )
          goto LABEL_10;
        v9 = v40;
      }
      v21 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v7 = -2147024362;
LABEL_26:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x112u);
    }
    else
    {
LABEL_10:
      v22 = a7;
      v23 = 0;
      if ( a7 )
      {
        v32 = a6;
        v33 = (_QWORD *)((char *)this + 104);
        v34 = 0LL;
        while ( 1 )
        {
          v39 = v32[v34];
          v35 = *((_DWORD *)this + 32);
          v36 = v35 + 1;
          if ( v35 + 1 < v35 )
            break;
          v7 = 0;
          if ( v36 > *((_DWORD *)this + 31) )
          {
            v37 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 104, 8u, 1, &v39);
            v38 = v37;
            if ( v37 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xC0u);
            v7 = v38;
            if ( v38 < 0 )
              goto LABEL_37;
          }
          else
          {
            *(_QWORD *)(*v33 + 8LL * v35) = v39;
            *((_DWORD *)this + 32) = v36;
          }
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v33 + 8 * v34) + 8LL))(*(_QWORD *)(*v33 + 8 * v34));
          v34 = ++v23;
          if ( v23 >= v22 )
            return v7;
        }
        v38 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v7 = -2147024362;
LABEL_37:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x11Cu);
      }
    }
  }
  return v7;
}
