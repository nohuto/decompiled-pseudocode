/*
 * XREFs of ?Initialize@DMMVIDPNSOURCEMODE@@QEAAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0017784
 * Callers:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C002B4EC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNSOURCEMODE::Initialize(
        DMMVIDPNSOURCEMODE *this,
        const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *a2,
        enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rax
  D3DKMDT_COLOR_BASIS ColorBasis; // eax
  D3DKMDT_PIXEL_VALUE_ACCESS_MODE PixelValueAccessMode; // eax
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax

  if ( a2->PrimSurfSize.cx < 0x64 || a2->PrimSurfSize.cy < 0x64 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v17[3] = a2->PrimSurfSize.cx;
    v17[4] = a2->PrimSurfSize.cy;
    v17[5] = a2;
    WdLogEvent5_WdError(v17);
    v9 = -1071774918;
  }
  else if ( a2->VisibleRegionSize.cx < 0x64 || a2->VisibleRegionSize.cy < 0x64 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v16[3] = a2->VisibleRegionSize.cx;
    v16[4] = a2->VisibleRegionSize.cy;
    v16[5] = a2;
    WdLogEvent5_WdError(v16);
    v9 = -1071774917;
  }
  else if ( a2->Stride )
  {
    if ( a2->PixelFormat )
    {
      ColorBasis = a2->ColorBasis;
      if ( ColorBasis && ColorBasis < (D3DKMDT_CB_YCBCR|D3DKMDT_CB_SRGB) )
      {
        PixelValueAccessMode = a2->PixelValueAccessMode;
        if ( PixelValueAccessMode && PixelValueAccessMode < 4 )
        {
          *((_DWORD *)this + 18) = a3;
          result = 0LL;
          *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)((char *)this + 76) = *a2;
          return result;
        }
        v14 = WdLogNewEntry5_WdError(this);
        *(_QWORD *)(v14 + 24) = a2->PixelValueAccessMode;
        *(_QWORD *)(v14 + 32) = a2;
        WdLogEvent5_WdError(v14);
        v9 = -1071774913;
      }
      else
      {
        v15 = WdLogNewEntry5_WdError(this);
        *(_QWORD *)(v15 + 24) = a2->ColorBasis;
        *(_QWORD *)(v15 + 32) = a2;
        WdLogEvent5_WdError(v15);
        v9 = -1071774914;
      }
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v10 + 24) = a2->PixelFormat;
      *(_QWORD *)(v10 + 32) = a2;
      WdLogEvent5_WdError(v10);
      v9 = -1071774915;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v4 + 24) = a2->Stride;
    *(_QWORD *)(v4 + 32) = a2;
    WdLogEvent5_WdError(v4);
    v9 = -1071774916;
  }
  v18 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
  WdLogEvent5_WdWarning(v18);
  return v9;
}
