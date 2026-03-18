/*
 * XREFs of ?ClassifyOverlayScenario@DXGDEVICE@@QEAAXIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAI22@Z @ 0x1C015CCBC
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXHPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015B788 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE.c)
 * Callees:
 *     ?IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z @ 0x1C015E378 (-IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z.c)
 */

void __fastcall DXGDEVICE::ClassifyOverlayScenario(
        DXGDEVICE *this,
        int a2,
        unsigned int a3,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a4,
        void **a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v8; // ebx
  float v9; // xmm6_4
  unsigned int v11; // r9d
  __int64 v12; // rdi
  int v14; // r12d
  DXGDEVICE *v15; // r8
  int v16; // r13d
  unsigned int v17; // ebp
  float v18; // xmm7_4
  void **v19; // rsi
  signed __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // r8
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v24; // r9
  _DWORD *v25; // r8
  _DWORD *v26; // rcx
  int v27; // r8d
  int v28; // edx
  float v29; // xmm1_4
  int v30; // ecx
  int v31; // [rsp+20h] [rbp-68h]
  __int64 v32; // [rsp+28h] [rbp-60h]

  v8 = 0;
  v9 = FLOAT_1_0;
  v11 = a3;
  v12 = 0LL;
  v14 = 1;
  v15 = this;
  v31 = 1;
  v16 = 1;
  v17 = 1;
  v18 = FLOAT_1_0;
  if ( !v11 )
    goto LABEL_34;
  v19 = a5;
  v20 = (char *)a4 - (char *)a5;
  do
  {
    v21 = *(__int64 *)((char *)v19 + v20);
    v32 = v21;
    if ( v8 != 3 )
    {
      if ( (unsigned int)DXGDEVICE::IsYUVAllocation(v15, *v19) )
        v8 = 3;
      if ( v8 == 3 )
      {
        v21 = v32;
      }
      else
      {
        if ( v8 != 2 )
        {
          if ( (_DWORD)v12 )
          {
            v22 = (unsigned int)(v12 - 1);
            if ( (_DWORD)v22 != a2 && (_DWORD)v12 != a2 )
            {
              pPlaneAttributes = a4[v12]->pPlaneAttributes;
              v24 = a4[v22]->pPlaneAttributes;
              if ( v24->ClipRect.left <= pPlaneAttributes->ClipRect.left
                && v24->ClipRect.right >= pPlaneAttributes->ClipRect.right
                && v24->ClipRect.top <= pPlaneAttributes->ClipRect.top
                && v24->ClipRect.bottom >= pPlaneAttributes->ClipRect.bottom
                && (pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left < pPlaneAttributes->DstRect.right
                                                                                     - pPlaneAttributes->DstRect.left
                 || pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top < pPlaneAttributes->DstRect.bottom
                                                                                     - pPlaneAttributes->DstRect.top)
                && (v24->Blend & 1) != 0 )
              {
                v8 = 2;
              }
            }
          }
        }
        v21 = v32;
        if ( v8 - 1 > 2 && (_DWORD)v12 != a2 )
        {
          v25 = *(_DWORD **)(v32 + 24);
          if ( v25[3] - v25[1] < v25[7] - v25[5] || v25[4] - v25[2] < v25[8] - v25[6] )
            v8 = 1;
        }
      }
      v11 = a3;
    }
    v26 = *(_DWORD **)(v21 + 24);
    v27 = v26[7] - v26[5];
    v28 = v26[3] - v26[1];
    v29 = (float)v27 / (float)v28;
    if ( v29 > v9 )
    {
      v14 = v26[3] - v26[1];
      v16 = v26[7] - v26[5];
      v9 = (float)v16 / (float)v14;
LABEL_27:
      v30 = v31;
      goto LABEL_28;
    }
    if ( v18 <= v29 )
      goto LABEL_27;
    v30 = v26[7] - v26[5];
    v17 = v28;
    v31 = v27;
    v18 = (float)v27 / (float)v28;
LABEL_28:
    v15 = this;
    v12 = (unsigned int)(v12 + 1);
    ++v19;
  }
  while ( (unsigned int)v12 < v11 );
  if ( v17 == 1 )
  {
LABEL_34:
    *a7 = v14;
    *a8 = v16;
    goto LABEL_35;
  }
  *a7 = v17;
  *a8 = v30;
LABEL_35:
  *a6 = v8;
}
