/*
 * XREFs of ?Initialize@CPrimitiveGroupDrawListGenerator@@AEAAJPEAPEAVIImageSource@@_K01PEAPEAVCResource@@1@Z @ 0x180094990
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageSource@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x18009DCF4 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::Initialize(
        CPrimitiveGroupDrawListGenerator *this,
        struct IImageSource **a2,
        unsigned __int64 a3,
        struct IImageSource **a4,
        unsigned __int64 a5,
        struct CResource **a6,
        unsigned __int64 a7)
{
  int v7; // ebx
  unsigned int v8; // ebp
  unsigned __int64 v13; // rbp
  unsigned int v14; // r14d
  __int64 v15; // rsi
  _QWORD *v16; // rdi
  unsigned int v17; // eax
  struct IImageSource **v18; // r9
  unsigned int v19; // edx
  int v20; // eax
  unsigned __int64 v21; // rbp
  unsigned int v22; // r14d
  __int64 v24; // rsi
  char *v25; // rdi
  unsigned int v26; // eax
  struct IImageSource **v27; // r9
  unsigned int v28; // edx
  int v29; // eax
  char *v30; // rdi
  __int64 v31; // rsi
  struct CResource **v32; // r15
  struct CResource *v33; // rax
  unsigned int v34; // eax
  unsigned int v35; // edx
  __int64 v36; // rcx
  int v37; // eax
  char *v38; // [rsp+70h] [rbp+18h] BYREF

  v7 = 0;
  v8 = 0;
  if ( a3 )
  {
    v24 = 0LL;
    v25 = (char *)this + 40;
    while ( 1 )
    {
      v26 = *((_DWORD *)v25 + 6);
      v27 = &a2[v24];
      v28 = v26 + 1;
      if ( v26 + 1 < v26 )
        break;
      v7 = 0;
      if ( v28 > *((_DWORD *)v25 + 5) )
      {
        v29 = DynArrayImpl<0>::AddMultipleAndSet(v25, 8LL, 1LL, v27);
        v7 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xC0u);
LABEL_15:
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xEDu);
          return (unsigned int)v7;
        }
        goto LABEL_16;
      }
      *(_QWORD *)(*(_QWORD *)v25 + 8LL * *((unsigned int *)v25 + 6)) = *v27;
      *((_DWORD *)v25 + 6) = v28;
LABEL_16:
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v25 + 8 * v24) + 8LL))(*(_QWORD *)(*(_QWORD *)v25
                                                                                                 + 8 * v24));
      v24 = ++v8;
      if ( v8 >= a3 )
        goto LABEL_2;
    }
    v7 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_15;
  }
LABEL_2:
  v13 = a5;
  v14 = 0;
  if ( a5 )
  {
    v15 = 0LL;
    v16 = (_QWORD *)((char *)this + 72);
    do
    {
      v17 = *((_DWORD *)this + 24);
      v18 = &a4[v15];
      v19 = v17 + 1;
      if ( v17 + 1 < v17 )
      {
        v7 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        v7 = 0;
        if ( v19 <= *((_DWORD *)this + 23) )
        {
          *(_QWORD *)(*v16 + 8LL * *((unsigned int *)this + 24)) = *v18;
          *((_DWORD *)this + 24) = v19;
          goto LABEL_8;
        }
        v20 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 72, 8LL, 1LL, v18);
        v7 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
      }
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xF4u);
        return (unsigned int)v7;
      }
LABEL_8:
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v16 + 8 * v15) + 8LL))(*(_QWORD *)(*v16 + 8 * v15));
      v15 = ++v14;
    }
    while ( v14 < v13 );
  }
  v21 = a7;
  v22 = 0;
  if ( a7 )
  {
    v30 = (char *)this + 104;
    v31 = 0LL;
    v32 = a6;
    do
    {
      v33 = v32[v31];
      if ( v33 )
        v38 = (char *)v33 - 8;
      else
        v38 = 0LL;
      v34 = *((_DWORD *)v30 + 6);
      v35 = v34 + 1;
      if ( v34 + 1 >= v34 )
      {
        v7 = 0;
        if ( v35 <= *((_DWORD *)v30 + 5) )
        {
          *(_QWORD *)(*(_QWORD *)v30 + 8LL * *((unsigned int *)v30 + 6)) = v38;
          *((_DWORD *)v30 + 6) = v35;
          goto LABEL_37;
        }
        v37 = DynArrayImpl<0>::AddMultipleAndSet(v30, 8LL, 1LL, &v38);
        v7 = v37;
        if ( v37 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xC0u);
      }
      else
      {
        v7 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xFEu);
        return (unsigned int)v7;
      }
LABEL_37:
      v36 = *(_QWORD *)(*(_QWORD *)v30 + 8 * v31) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
      v31 = ++v22;
    }
    while ( v22 < v21 );
  }
  return (unsigned int)v7;
}
