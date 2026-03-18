/*
 * XREFs of DetectNewMonitor @ 0x1C01E4C88
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 * Callees:
 *     GetInheritedMonitor @ 0x1C005C590 (GetInheritedMonitor.c)
 *     HasMaximizedState @ 0x1C005C9DC (HasMaximizedState.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01E4184 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEBUtagRECT@@GPEAU1@1G@Z @ 0x1C01E4270 (-TransformRectAroundCursor@@YAXPEBUtagRECT@@GPEAU1@1G@Z.c)
 *     GetMonitorTransform @ 0x1C01E531C (GetMonitorTransform.c)
 *     TransformVector @ 0x1C022D550 (TransformVector.c)
 */

__int64 __fastcall DetectNewMonitor(_BYTE **a1, struct tagRECT *a2)
{
  __int64 InheritedMonitor; // rax
  _BYTE *v5; // r14
  __int64 v6; // rdi
  struct tagWND *v7; // rdx
  __int64 MonitorTransform; // rax
  __int64 v9; // r8
  int v10; // r9d
  int v11; // r11d
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // r8d
  struct tagRECT v16; // xmm6
  int v17; // r9d
  LONG v18; // eax
  __int64 v19; // rbx
  INT v20; // r8d
  bool v21; // cc
  INT v22; // r15d
  INT v23; // r8d
  INT v24; // r15d
  LONG top; // ebx
  struct tagWND *v26; // rdx
  int v27; // r8d
  const struct tagRECT *v28; // r9
  const struct tagRECT *v29; // rdx
  __int64 v30; // rax
  int v31; // ecx
  unsigned __int16 v33[2]; // [rsp+20h] [rbp-60h]
  struct tagRECT v34; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v35; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v36; // [rsp+50h] [rbp-30h] BYREF

  InheritedMonitor = GetInheritedMonitor((struct tagWND *)*a1);
  v5 = a1[23];
  v6 = InheritedMonitor;
  v7 = (struct tagWND *)*a1;
  v34 = *a2;
  v36 = v34;
  MonitorTransform = GetMonitorTransform(v5, v7);
  if ( MonitorTransform )
  {
    TransformVector(MonitorTransform, (unsigned int)&v36, (unsigned int)&v36.top, 0, 0);
    TransformVector(v11, (unsigned int)&v36.right, (unsigned int)&v36.bottom, v10, v10 & *(_DWORD *)v33);
  }
  if ( !v6 )
  {
    v6 = MonitorFromRect(&v36.left, 32LL, v9);
    v12 = *((_DWORD *)a1 + 45);
    if ( (v12 & 0x2000000) == 0
      && ((v12 & 8) == 0 || !(unsigned int)HasMaximizedState(*a1))
      && v5
      && v6
      && v5 != (_BYTE *)v6 )
    {
      v13 = GetMonitorTransform(v6, *a1);
      v14 = v13;
      if ( v15 )
      {
        TransformRectAroundCursor(&v36, *((unsigned __int16 *)v5 + 76), 0LL, &v35, *(_WORD *)(v6 + 152));
        if ( IsNewMonitorRectMostOccupied(&v35, (const struct tagRECT *)(v6 + 28), (const struct tagRECT *)(v5 + 28)) )
        {
          v36 = v35;
          if ( v14 )
            TransformVector(v14, (unsigned int)&v36, (unsigned int)&v36.top, 0, 1);
          v36.right = v36.left + v34.right - v34.left;
          v36.bottom = v36.top + v34.bottom - v34.top;
          *a2 = v36;
          goto LABEL_44;
        }
      }
      else
      {
        v16 = v36;
        v34 = v36;
        if ( v13 )
        {
          TransformVector(v13, (unsigned int)&v34, (unsigned int)&v34.top, 0, 1);
          TransformVector(v14, (unsigned int)&v34.right, (unsigned int)&v34.bottom, v17, 1);
          v16 = v34;
        }
        v18 = _mm_cvtsi128_si32((__m128i)v16);
        v19 = *(_QWORD *)(gpsi + 3976LL);
        v20 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 8)) - v18;
        v21 = v20 <= *((_DWORD *)a1 + 22);
        v22 = v20;
        *(_QWORD *)&v35.left = v19;
        if ( v21 )
          v22 = *((_DWORD *)a1 + 22);
        v21 = v22 < *((_DWORD *)a1 + 24);
        v34.left = v18;
        if ( !v21 )
          v22 = *((_DWORD *)a1 + 24);
        if ( v22 != v20 )
        {
          v34.left = v19 - EngMulDiv(v19 - v36.left, v22, v20);
          v34.right = v34.left + v22;
          v16 = v34;
        }
        v34.top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 4));
        v23 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 12)) - v34.top;
        v24 = v23;
        if ( v23 <= *((_DWORD *)a1 + 23) )
          v24 = *((_DWORD *)a1 + 23);
        if ( v24 >= *((_DWORD *)a1 + 25) )
          v24 = *((_DWORD *)a1 + 25);
        if ( v24 != v23 )
        {
          top = v35.top;
          v34.top = top - EngMulDiv(v35.top - v36.top, v24, v23);
          v34.bottom = v34.top + v24;
          v16 = v34;
        }
        v26 = (struct tagWND *)*a1;
        v27 = *((_DWORD *)*a1 + 86);
        if ( v27 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 416LL) + 8LL) + 260LL) & 1) == 0 )
        {
          if ( v27 != 1
            || (v28 = (const struct tagRECT *)(v5 + 60),
                (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 416LL) + 8LL) + 260LL) & 1) == 0) )
          {
            v28 = (const struct tagRECT *)(v5 + 28);
          }
        }
        else
        {
          v28 = (const struct tagRECT *)(v5 + 44);
        }
        if ( v27 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 416LL) + 8LL) + 260LL) & 1) == 0 )
        {
          if ( v27 != 1
            || (v30 = *((_QWORD *)v26 + 2),
                v29 = (const struct tagRECT *)(v6 + 60),
                (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 416) + 8LL) + 260LL) & 1) == 0) )
          {
            v29 = (const struct tagRECT *)(v6 + 28);
          }
        }
        else
        {
          v29 = (const struct tagRECT *)(v6 + 44);
        }
        if ( IsNewMonitorRectMostOccupied(&v34, v29, v28) )
        {
          *a2 = v16;
          goto LABEL_44;
        }
      }
      v6 = (__int64)v5;
    }
  }
LABEL_44:
  if ( (_BYTE *)v6 == a1[23] || !v6 )
    return 0LL;
  v31 = *((_DWORD *)a1 + 45);
  a1[23] = (_BYTE *)v6;
  if ( (v31 & 0x20) == 0 )
    *((_DWORD *)a1 + 45) = v31 | 0x10000000;
  return 1LL;
}
