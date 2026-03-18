/*
 * XREFs of ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800ADA54
 * Callers:
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180021C50 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x180022C78 (-ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18002314C (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x18009D734 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800B66EC (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGRO.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180106DF0 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x180106F3C (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x18010E174 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180151690 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UnmarshalResourceArray(
        unsigned int **a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        __int64 **a7,
        __int64 a8,
        char a9)
{
  int v9; // ebx
  unsigned int v12; // edi
  SIZE_T v13; // rdx
  LPVOID (__fastcall *v14)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  __int64 *v15; // rax
  unsigned int *v16; // rsi
  unsigned int v17; // ebp
  __int64 *v18; // rbx
  unsigned int v19; // edx
  __int64 Resource; // rax
  unsigned __int64 v21; // rax
  char *v22; // rcx
  unsigned __int64 v23; // rax
  int v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-38h]
  unsigned int v27; // [rsp+78h] [rbp+20h]

  v27 = a4;
  v9 = 0;
  *a6 = 0;
  *a7 = 0LL;
  if ( a3 > *a2 || (a3 & 3) != 0 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x53u);
LABEL_19:
    if ( v9 >= 0 )
      return (unsigned int)v9;
    goto LABEL_29;
  }
  v12 = a3 >> 2;
  *a6 = a3 >> 2;
  if ( !(a3 >> 2) )
    return (unsigned int)v9;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v12 <= 8 )
  {
    v9 = -2147024809;
  }
  else
  {
    v13 = 8LL * v12;
    v14 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v14 == WPF::ProcessHeapImpl::Alloc )
      v15 = (__int64 *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v13);
    else
      v15 = (__int64 *)v14(WPF::g_pProcessHeap, v13);
    a4 = v27;
    *a7 = v15;
    if ( !v15 )
      v9 = -2147024882;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x6Au);
    goto LABEL_19;
  }
  v16 = *a1;
  v17 = 0;
  v18 = *a7;
  while ( 1 )
  {
    v19 = *v16;
    Resource = 0LL;
    ++v16;
    if ( v19 )
    {
      Resource = CResourceTable::GetResource(a8, v19, a4);
      if ( !Resource )
      {
        v26 = 130;
        goto LABEL_26;
      }
    }
    else if ( !a9 )
    {
      v26 = 134;
LABEL_26:
      v25 = -2147024890;
      goto LABEL_28;
    }
    *v18 = Resource;
    ++v17;
    ++v18;
    if ( v17 >= v12 )
      break;
    a4 = v27;
  }
  if ( v16 < *a1 )
  {
    v25 = -2147024362;
    v26 = 154;
  }
  else
  {
    v21 = *a2;
    v22 = (char *)((char *)v16 - (char *)*a1);
    if ( v21 < (unsigned __int64)v22 )
    {
      v25 = -2147024362;
      v26 = 155;
    }
    else
    {
      v23 = v21 - (_QWORD)v22;
      if ( v23 <= 0xFFFFFFFF )
      {
        *a2 = v23;
        v9 = 0;
        *a1 = v16;
        goto LABEL_19;
      }
      *a2 = -1;
      v25 = -2147024362;
      v26 = 156;
    }
  }
LABEL_28:
  v9 = v25;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v26);
LABEL_29:
  if ( *a7 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64 *, _QWORD, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *a7,
      *(_QWORD *)WPF::g_pProcessHeap,
      a4);
    *a7 = 0LL;
  }
  *a6 = 0;
  return (unsigned int)v9;
}
