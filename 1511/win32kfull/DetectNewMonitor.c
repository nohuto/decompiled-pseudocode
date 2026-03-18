/*
 * XREFs of DetectNewMonitor @ 0x1C01E5118
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 * Callees:
 *     GetInheritedMonitor @ 0x1C006E21C (GetInheritedMonitor.c)
 *     HasMaximizedState @ 0x1C006E670 (HasMaximizedState.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01E4614 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEBUtagRECT@@GPEAU1@1G@Z @ 0x1C01E4700 (-TransformRectAroundCursor@@YAXPEBUtagRECT@@GPEAU1@1G@Z.c)
 *     GetMonitorTransform @ 0x1C01E57AC (GetMonitorTransform.c)
 *     TransformVector @ 0x1C022D854 (TransformVector.c)
 */

__int64 __fastcall DetectNewMonitor(_BYTE **a1, struct tagRECT *a2)
{
  __int64 InheritedMonitor; // rax
  _BYTE *v5; // r14
  __int64 v6; // rdi
  struct tagWND *v7; // rdx
  __int64 MonitorTransform; // rax
  int v9; // r9d
  int v10; // r11d
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // r8d
  struct tagRECT v15; // xmm6
  int v16; // r9d
  LONG v17; // eax
  __int64 v18; // rbx
  INT v19; // r8d
  bool v20; // cc
  INT v21; // r15d
  INT v22; // r8d
  INT v23; // r15d
  LONG top; // ebx
  struct tagWND *v25; // rdx
  int v26; // r8d
  const struct tagRECT *v27; // r9
  const struct tagRECT *v28; // rdx
  __int64 v29; // rax
  int v30; // ecx
  unsigned __int16 v32[2]; // [rsp+20h] [rbp-60h]
  struct tagRECT v33; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v34; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v35; // [rsp+50h] [rbp-30h] BYREF

  InheritedMonitor = GetInheritedMonitor((struct tagWND *)*a1);
  v5 = a1[23];
  v6 = InheritedMonitor;
  v7 = (struct tagWND *)*a1;
  v33 = *a2;
  v35 = v33;
  MonitorTransform = GetMonitorTransform(v5, v7);
  if ( MonitorTransform )
  {
    TransformVector(MonitorTransform, (unsigned int)&v35, (unsigned int)&v35.top, 0, 0);
    TransformVector(v10, (unsigned int)&v35.right, (unsigned int)&v35.bottom, v9, v9 & *(_DWORD *)v32);
  }
  if ( !v6 )
  {
    v6 = MonitorFromRect(&v35.left, 0x20u);
    v11 = *((_DWORD *)a1 + 45);
    if ( (v11 & 0x2000000) == 0
      && ((v11 & 8) == 0 || !(unsigned int)HasMaximizedState(*a1))
      && v5
      && v6
      && v5 != (_BYTE *)v6 )
    {
      v12 = GetMonitorTransform(v6, *a1);
      v13 = v12;
      if ( v14 )
      {
        TransformRectAroundCursor(&v35, *((unsigned __int16 *)v5 + 76), 0LL, &v34, *(_WORD *)(v6 + 152));
        if ( IsNewMonitorRectMostOccupied(&v34, (const struct tagRECT *)(v6 + 28), (const struct tagRECT *)(v5 + 28)) )
        {
          v35 = v34;
          if ( v13 )
            TransformVector(v13, (unsigned int)&v35, (unsigned int)&v35.top, 0, 1);
          v35.right = v35.left + v33.right - v33.left;
          v35.bottom = v35.top + v33.bottom - v33.top;
          *a2 = v35;
          goto LABEL_44;
        }
      }
      else
      {
        v15 = v35;
        v33 = v35;
        if ( v12 )
        {
          TransformVector(v12, (unsigned int)&v33, (unsigned int)&v33.top, 0, 1);
          TransformVector(v13, (unsigned int)&v33.right, (unsigned int)&v33.bottom, v16, 1);
          v15 = v33;
        }
        v17 = _mm_cvtsi128_si32((__m128i)v15);
        v18 = *(_QWORD *)(gpsi + 3976LL);
        v19 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v15, 8)) - v17;
        v20 = v19 <= *((_DWORD *)a1 + 22);
        v21 = v19;
        *(_QWORD *)&v34.left = v18;
        if ( v20 )
          v21 = *((_DWORD *)a1 + 22);
        v20 = v21 < *((_DWORD *)a1 + 24);
        v33.left = v17;
        if ( !v20 )
          v21 = *((_DWORD *)a1 + 24);
        if ( v21 != v19 )
        {
          v33.left = v18 - EngMulDiv(v18 - v35.left, v21, v19);
          v33.right = v33.left + v21;
          v15 = v33;
        }
        v33.top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v15, 4));
        v22 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v15, 12)) - v33.top;
        v23 = v22;
        if ( v22 <= *((_DWORD *)a1 + 23) )
          v23 = *((_DWORD *)a1 + 23);
        if ( v23 >= *((_DWORD *)a1 + 25) )
          v23 = *((_DWORD *)a1 + 25);
        if ( v23 != v22 )
        {
          top = v34.top;
          v33.top = top - EngMulDiv(v34.top - v35.top, v23, v22);
          v33.bottom = v33.top + v23;
          v15 = v33;
        }
        v25 = (struct tagWND *)*a1;
        v26 = *((_DWORD *)*a1 + 86);
        if ( v26 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 408LL) + 8LL) + 244LL) & 1) == 0 )
        {
          if ( v26 != 1
            || (v27 = (const struct tagRECT *)(v5 + 60),
                (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 408LL) + 8LL) + 244LL) & 1) == 0) )
          {
            v27 = (const struct tagRECT *)(v5 + 28);
          }
        }
        else
        {
          v27 = (const struct tagRECT *)(v5 + 44);
        }
        if ( v26 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 408LL) + 8LL) + 244LL) & 1) == 0 )
        {
          if ( v26 != 1
            || (v29 = *((_QWORD *)v25 + 2),
                v28 = (const struct tagRECT *)(v6 + 60),
                (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 408) + 8LL) + 244LL) & 1) == 0) )
          {
            v28 = (const struct tagRECT *)(v6 + 28);
          }
        }
        else
        {
          v28 = (const struct tagRECT *)(v6 + 44);
        }
        if ( IsNewMonitorRectMostOccupied(&v33, v28, v27) )
        {
          *a2 = v15;
          goto LABEL_44;
        }
      }
      v6 = (__int64)v5;
    }
  }
LABEL_44:
  if ( (_BYTE *)v6 == a1[23] || !v6 )
    return 0LL;
  v30 = *((_DWORD *)a1 + 45);
  a1[23] = (_BYTE *)v6;
  if ( (v30 & 0x20) == 0 )
    *((_DWORD *)a1 + 45) = v30 | 0x10000000;
  return 1LL;
}
