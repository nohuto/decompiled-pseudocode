/*
 * XREFs of ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001B270
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ @ 0x180016E60 (-UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001AE80 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x18001DA10 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::ValidateVisualPostSubgraph(CAtlasedRectsVisual *this)
{
  unsigned int v1; // r15d
  unsigned int v3; // edi
  __int64 v4; // rbx
  unsigned int v5; // r8d
  unsigned int v6; // edx
  int v7; // r9d
  int v8; // r10d
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  __int64 result; // rax
  CVisual *v13; // rbx
  void (__fastcall *v14)(CVisual *__hidden, unsigned int); // rbp
  int v15; // eax
  CVisual *j; // rbx
  int v17; // ecx
  void (__fastcall *v18)(CVisual *__hidden); // rbp
  CVisual *v19; // r14
  void (__fastcall *v20)(CVisual *__hidden, unsigned int); // rbp
  int v21; // eax
  CVisual *i; // r14
  int v23; // ecx
  void (__fastcall *v24)(CVisual *__hidden); // rbp
  __int64 (__fastcall *v25)(CAtlasedRectsVisual *); // rbx
  int updated; // eax
  __int64 (__fastcall *v27)(CVisual *__hidden); // rbx
  unsigned int v28; // ebx
  __int64 v29; // [rsp+78h] [rbp+10h]
  __int64 v30; // [rsp+80h] [rbp+18h]

  v1 = 0;
  if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
  {
    v3 = 0;
    if ( *((_DWORD *)this + 72) )
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL * v3);
        v5 = *(_DWORD *)(v4 + 32);
        v6 = *(_DWORD *)(v4 + 36);
        v7 = *(_DWORD *)(v4 + 44);
        v8 = *(_DWORD *)(v4 + 40);
        if ( __PAIR64__(v6, v5) != 0x7FFFFFFF7FFFFFFFLL || v8 != 0x7FFFFFFF || v7 != 0x7FFFFFFF )
          break;
LABEL_19:
        if ( ++v3 >= *((_DWORD *)this + 72) )
          goto LABEL_20;
      }
      v9 = *(_QWORD *)(v4 + 24);
      v10 = 0;
      v30 = v9;
      v29 = 0LL;
      if ( v6 == 0x7FFFFFFF )
      {
        if ( v5 == 0x7FFFFFFF )
        {
LABEL_9:
          if ( v7 == 0x7FFFFFFF )
          {
            if ( v8 == 0x7FFFFFFF )
              goto LABEL_13;
          }
          else
          {
            v11 = *((_DWORD *)this + 29);
            if ( v8 == 0x7FFFFFFF )
            {
              HIDWORD(v29) = v11 - *(_DWORD *)(v4 + 28) - v7;
              goto LABEL_13;
            }
            HIDWORD(v30) = v11 - v8 - v7;
          }
          HIDWORD(v29) = *(_DWORD *)(v4 + 40);
LABEL_13:
          if ( (int)v30 <= 0 )
            LODWORD(v30) = 0;
          if ( SHIDWORD(v30) <= 0 )
            HIDWORD(v30) = 0;
          if ( __PAIR64__(HIDWORD(v29), v10) != *(_QWORD *)(v4 + 16) )
          {
            *(_DWORD *)(v4 + 96) |= 1u;
            v19 = *(CVisual **)(v4 + 80);
            *(_QWORD *)(v4 + 16) = v29;
            if ( v19 )
            {
              v20 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v19 + 24LL);
              if ( v20 == CVisual::SetDirtyFlags )
              {
                v21 = *((_DWORD *)v19 + 20);
                if ( (v21 & 0x2000) == 0 )
                {
                  *((_DWORD *)v19 + 20) = v21 | 0x2000;
                  for ( i = (CVisual *)*((_QWORD *)v19 + 3); i; i = (CVisual *)*((_QWORD *)i + 3) )
                  {
                    v23 = *((_DWORD *)i + 20);
                    if ( (v23 & 1) != 0 )
                      break;
                    v24 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)i + 32LL);
                    if ( v24 == CVisual::SetDirtyChildren )
                      *((_DWORD *)i + 20) = v23 | 1;
                    else
                      v24(i);
                  }
                }
              }
              else
              {
                v20(v19, 0x2000u);
              }
            }
          }
          if ( *(_QWORD *)(v4 + 24) != v30 )
          {
            *(_DWORD *)(v4 + 96) |= 1u;
            *(_QWORD *)(v4 + 24) = v30;
            v13 = *(CVisual **)(v4 + 80);
            if ( v13 )
            {
              v14 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v13 + 24LL);
              if ( v14 == CVisual::SetDirtyFlags )
              {
                v15 = *((_DWORD *)v13 + 20);
                if ( (v15 & 0x2000) == 0 )
                {
                  *((_DWORD *)v13 + 20) = v15 | 0x2000;
                  for ( j = (CVisual *)*((_QWORD *)v13 + 3); j; j = (CVisual *)*((_QWORD *)j + 3) )
                  {
                    v17 = *((_DWORD *)j + 20);
                    if ( (v17 & 1) != 0 )
                      break;
                    v18 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)j + 32LL);
                    if ( v18 == CVisual::SetDirtyChildren )
                      *((_DWORD *)j + 20) = v17 | 1;
                    else
                      v18(j);
                  }
                }
              }
              else
              {
                v14(v13, 0x2000u);
              }
            }
          }
          goto LABEL_19;
        }
      }
      else
      {
        if ( v5 == 0x7FFFFFFF )
        {
          v10 = *((_DWORD *)this + 28) - v9 - v6;
          goto LABEL_8;
        }
        LODWORD(v30) = *((_DWORD *)this + 28) - v6 - v5;
      }
      v10 = *(_DWORD *)(v4 + 32);
LABEL_8:
      LODWORD(v29) = v10;
      goto LABEL_9;
    }
LABEL_20:
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  if ( (*((_DWORD *)this + 20) & 0x2000) != 0 )
  {
    v25 = *(__int64 (__fastcall **)(CAtlasedRectsVisual *))(*(_QWORD *)this + 184LL);
    if ( v25 == CTopLevelAtlasedRectsVisual::UpdateAtlas )
    {
      updated = CTopLevelAtlasedRectsVisual::UpdateAtlas(this);
    }
    else if ( v25 == CAtlasedRectsVisual::UpdateAtlas )
    {
      updated = CAtlasedRectsVisual::UpdateAtlas(this);
    }
    else
    {
      updated = v25(this);
    }
    v1 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xB1u);
      return v1;
    }
    *((_DWORD *)this + 20) &= ~0x2000u;
  }
  if ( (*((_BYTE *)this + 80) & 4) == 0 )
    return v1;
  v27 = *(__int64 (__fastcall **)(CVisual *__hidden))(*(_QWORD *)this + 40LL);
  if ( v27 == CVisual::UpdateRenderData )
    result = CVisual::UpdateRenderData(this);
  else
    result = v27(this);
  v28 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, result, 0xB8u);
    return v28;
  }
  else
  {
    *((_DWORD *)this + 20) &= ~4u;
  }
  return result;
}
