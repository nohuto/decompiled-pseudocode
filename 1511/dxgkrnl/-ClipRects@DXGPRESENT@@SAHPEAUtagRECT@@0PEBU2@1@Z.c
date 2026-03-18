/*
 * XREFs of ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C00C7AF0
 * Callers:
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00C79C8 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 * Callees:
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C00C7A84 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z @ 0x1C014B704 (-ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z.c)
 */

__int64 __fastcall DXGPRESENT::ClipRects(
        struct tagRECT *a1,
        struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  __int64 v4; // rdi
  LONG top; // eax
  LONG bottom; // ecx
  LONG left; // edx
  LONG right; // r8d
  LONG v14; // r13d
  LONG v15; // r12d
  LONG v16; // edx
  int v17; // ecx
  LONG v18; // eax
  LONG v19; // r8d
  unsigned int v20; // eax
  LONG v21; // edx
  LONG v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // ebx
  signed int v26; // r15d
  int v27; // r8d
  int v28; // r13d
  int v29; // r13d
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  LONG v33; // [rsp+30h] [rbp-40h]
  int v34; // [rsp+30h] [rbp-40h]
  int v35; // [rsp+34h] [rbp-3Ch]
  int v36; // [rsp+34h] [rbp-3Ch]
  struct tagRECT v37; // [rsp+38h] [rbp-38h] BYREF
  LONG v38; // [rsp+48h] [rbp-28h]
  LONG v39; // [rsp+4Ch] [rbp-24h]
  unsigned int v40; // [rsp+50h] [rbp-20h]
  LONG v41; // [rsp+54h] [rbp-1Ch]
  LONG v42; // [rsp+58h] [rbp-18h]
  struct tagRECT v43; // [rsp+60h] [rbp-10h] BYREF
  LONG v44; // [rsp+B0h] [rbp+40h]
  int v45; // [rsp+B0h] [rbp+40h]

  v4 = 0LL;
  if ( a3 )
  {
    top = a3->top;
    if ( top >= a1->bottom )
      return 0LL;
    bottom = a3->bottom;
    if ( bottom <= a1->top )
      return 0LL;
    left = a3->left;
    if ( a3->left >= a1->right )
      return 0LL;
    right = a3->right;
    if ( right <= a1->left || top >= bottom || left >= right )
      return 0LL;
  }
  if ( !a4 )
  {
    if ( a3 )
    {
      DXGPRESENT::ClipIntervals(&a1->top, &a1->bottom, &a2->top, &a2->bottom, a3->top, a3->bottom);
      DXGPRESENT::ClipIntervals(&a1->left, &a1->right, &a2->left, &a2->right, a3->left, a3->right);
    }
    return 1LL;
  }
  v14 = a4->top;
  if ( v14 < a2->bottom - a2->top )
  {
    v15 = a4->bottom;
    if ( v15 > 0 )
    {
      v16 = a4->left;
      v17 = a2->right - a2->left;
      v41 = v16;
      if ( v16 < v17 )
      {
        v18 = a4->right;
        v33 = v18;
        if ( v18 > 0 && v14 < v15 && v16 < v18 )
        {
          if ( !a3 )
          {
            DXGPRESENT::ClipIntervals(&a2->top, &a2->bottom, &a1->top, &a1->bottom, v14, v15);
            DXGPRESENT::ClipIntervals(&a2->left, &a2->right, &a1->left, &a1->right, a4->left, a4->right);
            return 1LL;
          }
          v19 = a3->left;
          v42 = a3->right;
          v44 = v19;
          v20 = ((v18 - v16) << 16) / (v42 - v19);
          v21 = a3->top;
          v22 = a3->bottom;
          v40 = v20;
          v38 = v21;
          v39 = v22;
          v23 = (unsigned int)(v22 - v21);
          v24 = (unsigned int)((v15 - v14) << 16 >> 31);
          v35 = ((v15 - v14) << 16) / (int)v23;
          if ( v20 && ((v15 - v14) << 16) / (int)v23 )
          {
            if ( DXGPRESENT::IntersectRect(&v37, a3, a1) )
            {
              v25 = v35;
              v26 = v40;
              v45 = (v41 << 16) + v40 * (v37.left - v44);
              v27 = (v14 << 16) + v35 * (v37.top - v38);
              v34 = (v33 << 16) + v40 * (v37.right - v42);
              v43.left = (v45 + 0xFFFF) >> 16;
              v43.right = v34 >> 16;
              v43.top = (v27 + 0xFFFF) >> 16;
              v28 = v35 * (v37.bottom - v39);
              v36 = v27;
              v29 = (v15 << 16) + v28;
              v43.bottom = v29 >> 16;
              if ( DXGPRESENT::IntersectRect(a2, &v43, a2) )
              {
                v37.left += (v26 + (a2->left << 16) - v45 - 1) / v26;
                v37.right += ((a2->right << 16) - v34) / v26;
                v37.top += (v25 + (a2->top << 16) - v36 - 1) / v25;
                v37.bottom += ((a2->bottom << 16) - v29) / v25;
                if ( DXGPRESENT::IntersectRect(a1, &v37, a1) )
                  return 1LL;
              }
            }
          }
          else
          {
            LODWORD(v24) = ((v15 - v14) << 16) % (int)v23;
            v30 = WdLogNewEntry5_WdWarning(v23, v24, v20, a4);
            v31 = (_QWORD *)(v30 + 24);
            do
            {
              v32 = *(&a4->left + v4++);
              *v31++ = v32;
            }
            while ( v4 < 4 );
            WdLogEvent5_WdWarning(v30);
          }
        }
      }
    }
  }
  return 0LL;
}
