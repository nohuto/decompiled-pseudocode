/*
 * XREFs of DetectNewMonitor @ 0x1C01DB9AC
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     GetInheritedMonitor @ 0x1C0070E64 (GetInheritedMonitor.c)
 *     HasMaximizedState @ 0x1C00712A4 (HasMaximizedState.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01DAEF8 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01DAFE4 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetMonitorTransform @ 0x1C01DC094 (GetMonitorTransform.c)
 *     TransformVector @ 0x1C02235C0 (TransformVector.c)
 */

__int64 __fastcall DetectNewMonitor(struct tagWND **a1, struct tagRECT *a2)
{
  __int64 InheritedMonitor; // rax
  struct tagWND *v5; // r14
  __int64 v6; // rdi
  struct tagWND *v7; // rdx
  struct tagKE *v8; // rcx
  int v9; // r11d
  int v10; // r9d
  int v11; // r11d
  struct tagKE *v12; // rcx
  int v13; // eax
  __int64 MonitorTransform; // rax
  __int64 v15; // rbx
  int v16; // r8d
  struct tagWND *v17; // rcx
  unsigned int MonitorFlagsFromWindow; // eax
  int left; // edx
  int top; // r8d
  struct tagRECT v21; // xmm6
  int v22; // r9d
  LONG v23; // eax
  __int64 v24; // rbx
  INT v25; // r8d
  bool v26; // cc
  INT v27; // r15d
  INT v28; // r8d
  INT v29; // r15d
  LONG v30; // ebx
  struct tagWND *v31; // r8
  int v32; // edx
  __int64 v33; // rax
  const struct tagRECT *v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  const struct tagRECT *v37; // rdx
  __int64 v38; // rax
  int v39; // ecx
  int v41; // [rsp+28h] [rbp-49h]
  struct tagRECT v42; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v43; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v44; // [rsp+58h] [rbp-19h]
  struct tagRECT v45; // [rsp+68h] [rbp-9h] BYREF

  InheritedMonitor = GetInheritedMonitor(*a1);
  v5 = a1[23];
  v6 = InheritedMonitor;
  v7 = *a1;
  v44 = *a2;
  v45 = v44;
  if ( GetMonitorTransform(v5, v7) && (unsigned int)NlsNullProc(v8) )
  {
    TransformVector(v9, (unsigned int)&v45, (unsigned int)&v45.top, 0, 0);
    TransformVector(v11, (unsigned int)&v45.right, (unsigned int)&v45.bottom, v10, v10 & v41);
  }
  if ( !v6 )
  {
    v6 = MonitorFromRect(&v45.left, 0x20u);
    v13 = *((_DWORD *)a1 + 45);
    if ( (v13 & 0x2000000) == 0
      && ((v13 & 8) == 0 || !(unsigned int)HasMaximizedState(*a1))
      && v5
      && v6
      && v5 != (struct tagWND *)v6
      && (unsigned int)NlsNullProc(v12) )
    {
      MonitorTransform = GetMonitorTransform(v6, *a1);
      v15 = MonitorTransform;
      if ( v16 )
      {
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)a1,
          &v45,
          *((_WORD *)v5 + 77),
          0LL,
          &v43,
          *(_WORD *)(v6 + 154));
        if ( IsNewMonitorRectMostOccupied(
               &v43,
               (const struct tagRECT *)(v6 + 28),
               (const struct tagRECT *)((char *)v5 + 28)) )
        {
          v45 = v43;
          if ( v15 )
            TransformVector(v15, (unsigned int)&v45, (unsigned int)&v45.top, 0, 1);
          v17 = *a1;
          if ( (*((_DWORD *)*a1 + 88) & 0xF) == 2 )
          {
            top = v45.top;
            left = v45.left;
          }
          else
          {
            *(_QWORD *)&v43.left = v6;
            MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)v17);
            PhysicalToLogicalDPIPoint(&v42, (char *)a1 + 284, MonitorFlagsFromWindow);
            left = *((_DWORD *)a1 + 38) + v42.left;
            top = *((_DWORD *)a1 + 39) + v42.top;
            v45.top = top;
            v45.left = left;
          }
          v45.right = left + v44.right - v44.left;
          v45.bottom = top + v44.bottom - v44.top;
          *a2 = v45;
          goto LABEL_53;
        }
      }
      else
      {
        v21 = v45;
        v42 = v45;
        if ( MonitorTransform )
        {
          TransformVector(MonitorTransform, (unsigned int)&v42, (unsigned int)&v42.top, 0, 1);
          TransformVector(v15, (unsigned int)&v42.right, (unsigned int)&v42.bottom, v22, 1);
          v21 = v42;
        }
        v23 = _mm_cvtsi128_si32((__m128i)v21);
        v24 = *(_QWORD *)(gpsi + 5368LL);
        v25 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v21, 8)) - v23;
        v26 = v25 <= *((_DWORD *)a1 + 22);
        v27 = v25;
        *(_QWORD *)&v43.left = v24;
        if ( v26 )
          v27 = *((_DWORD *)a1 + 22);
        v26 = v27 < *((_DWORD *)a1 + 24);
        v42.left = v23;
        if ( !v26 )
          v27 = *((_DWORD *)a1 + 24);
        if ( v27 != v25 )
        {
          v42.left = v24 - EngMulDiv(v24 - v45.left, v27, v25);
          v42.right = v42.left + v27;
          v21 = v42;
        }
        v42.top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v21, 4));
        v28 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v21, 12)) - v42.top;
        v29 = v28;
        if ( v28 <= *((_DWORD *)a1 + 23) )
          v29 = *((_DWORD *)a1 + 23);
        if ( v29 >= *((_DWORD *)a1 + 25) )
          v29 = *((_DWORD *)a1 + 25);
        if ( v29 != v28 )
        {
          v30 = v43.top;
          v42.top = v30 - EngMulDiv(v43.top - v45.top, v29, v28);
          v42.bottom = v42.top + v29;
          v21 = v42;
        }
        v31 = *a1;
        v32 = *((_DWORD *)*a1 + 88) & 0xF;
        if ( !v32
          && (v33 = *(_QWORD *)(*((_QWORD *)v31 + 2) + 408LL)) != 0
          && (*(_DWORD *)(*(_QWORD *)(v33 + 8) + 244LL) & 1) != 0 )
        {
          v34 = (const struct tagRECT *)((char *)v5 + 44);
        }
        else if ( v32 != 1
               || (v35 = *(_QWORD *)(*((_QWORD *)v31 + 2) + 408LL)) == 0
               || (v34 = (const struct tagRECT *)((char *)v5 + 60), (*(_DWORD *)(*(_QWORD *)(v35 + 8) + 244LL) & 1) == 0) )
        {
          v34 = (const struct tagRECT *)((char *)v5 + 28);
        }
        if ( !v32
          && (v36 = *(_QWORD *)(*((_QWORD *)v31 + 2) + 408LL)) != 0
          && (*(_DWORD *)(*(_QWORD *)(v36 + 8) + 244LL) & 1) != 0 )
        {
          v37 = (const struct tagRECT *)(v6 + 44);
        }
        else if ( v32 != 1
               || (v38 = *(_QWORD *)(*((_QWORD *)v31 + 2) + 408LL)) == 0
               || (v37 = (const struct tagRECT *)(v6 + 60), (*(_DWORD *)(*(_QWORD *)(v38 + 8) + 244LL) & 1) == 0) )
        {
          v37 = (const struct tagRECT *)(v6 + 28);
        }
        if ( IsNewMonitorRectMostOccupied(&v42, v37, v34) )
        {
          *a2 = v21;
          goto LABEL_53;
        }
      }
      v6 = (__int64)v5;
    }
  }
LABEL_53:
  if ( (struct tagWND *)v6 == a1[23] || !v6 )
    return 0LL;
  v39 = *((_DWORD *)a1 + 45);
  a1[23] = (struct tagWND *)v6;
  if ( (v39 & 0x20) == 0 )
    *((_DWORD *)a1 + 45) = v39 | 0x10000000;
  return 1LL;
}
