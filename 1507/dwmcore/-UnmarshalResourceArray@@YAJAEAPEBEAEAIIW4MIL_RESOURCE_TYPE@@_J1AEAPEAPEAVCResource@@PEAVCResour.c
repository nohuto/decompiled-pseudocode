/*
 * XREFs of ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x18005C06C
 * Callers:
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x180016CE4 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18001A0C0 (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180060418 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800607A8 (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGRO.c)
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x180106F60 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180117918 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x18011811C (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180118210 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall UnmarshalResourceArray(
        WPF *a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        __int64 **a7,
        __int64 a8,
        char a9)
{
  int v9; // esi
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int *v14; // rdi
  unsigned int v15; // r12d
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 Resource; // rax
  unsigned __int64 v19; // rax
  char *v20; // rcx
  unsigned __int64 v21; // rax
  void **v23; // [rsp+20h] [rbp-38h]

  v9 = 0;
  *a6 = 0;
  *a7 = 0LL;
  if ( a3 > *a2 || (a3 & 3) != 0 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x53u);
    goto LABEL_23;
  }
  v12 = a3 >> 2;
  *a6 = a3 >> 2;
  if ( !(a3 >> 2) )
    return (unsigned int)v9;
  v13 = WPF::HrMalloc(a1, 8LL, v12, (unsigned __int64)a7, v23);
  v9 = v13;
  if ( v13 >= 0 )
  {
    v14 = *(unsigned int **)a1;
    v15 = 0;
    v16 = *a7;
    do
    {
      v17 = *v14;
      Resource = 0LL;
      ++v14;
      if ( (_DWORD)v17 )
      {
        Resource = CResourceTable::GetResource(a8, v17, a4);
        if ( !Resource )
        {
          v9 = -2147024890;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x82u);
          goto LABEL_23;
        }
      }
      else if ( !a9 )
      {
        v9 = -2147024890;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x86u);
        goto LABEL_23;
      }
      *v16 = Resource;
      ++v15;
      ++v16;
    }
    while ( v15 < v12 );
    if ( (unsigned __int64)v14 < *(_QWORD *)a1 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x9Au);
    }
    else
    {
      v19 = *a2;
      v20 = (char *)v14 - *(_QWORD *)a1;
      if ( v19 < (unsigned __int64)v20 )
      {
        v9 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x9Bu);
      }
      else
      {
        v21 = v19 - (_QWORD)v20;
        if ( v21 <= 0xFFFFFFFF )
        {
          *a2 = v21;
          v9 = 0;
          *(_QWORD *)a1 = v14;
          goto LABEL_13;
        }
        *a2 = -1;
        v9 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x9Cu);
      }
    }
    goto LABEL_23;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x6Au);
LABEL_13:
  if ( v9 < 0 )
  {
LABEL_23:
    if ( *a7 )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *a7);
      *a7 = 0LL;
    }
    *a6 = 0;
  }
  return (unsigned int)v9;
}
