/*
 * XREFs of ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008B280
 * Callers:
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x14008982C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008A10C (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     xxxWindowFromPoint @ 0x14008DE78 (xxxWindowFromPoint.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140038250 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1400462A4 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008A10C (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14008C220 (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     SizeBoxHwnd @ 0x140258834 (SizeBoxHwnd.c)
 */

__int64 __fastcall xxxWindowHitTest2(__int64 a1, struct tagPOINT a2, int *a3, unsigned int a4)
{
  signed __int32 *v7; // rdi
  const signed __int32 *v8; // rsi
  struct tagTHREADINFO **v9; // r14
  __int64 v10; // rdx
  __int64 *v11; // rbp
  __int64 *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  struct tagTHREADINFO *v17; // rax
  int v18; // ecx
  __int64 v20; // rdx
  __int64 v21; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-38h] BYREF
  struct tagPOINT v23; // [rsp+98h] [rbp+10h] BYREF

  v23 = a2;
  v7 = (signed __int32 *)a1;
  if ( !a1 )
    return 0LL;
  v8 = (const signed __int32 *)(a1 + 380);
  v9 = (struct tagTHREADINFO **)(a1 + 40);
  if ( (*(_DWORD *)(a1 + 380) & 0x40000000) == 0
    && ((*((_BYTE *)*v9 + 31) & 0x10) == 0
     || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)((char *)*v9 + 88, a2)) )
  {
    return 0LL;
  }
  if ( tagWND::PtOutsideClipRgnOrMaxClip((tagWND *)v7, &v23) )
    return 0LL;
  v11 = (__int64 *)v9;
  if ( (*((_BYTE *)*v9 + 26) & 8) != 0 )
  {
    if ( !LayerHitTest((struct tagWND *)v7, a2) )
      return 0LL;
    v8 = v7 + 95;
    v11 = (__int64 *)(v7 + 10);
  }
  v12 = (__int64 *)v9;
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v7, v10) )
  {
    v12 = v11;
    if ( (a4 & 1) != 0 )
    {
      v17 = *v9;
      if ( (*((_BYTE *)*v9 + 31) & 0xC0) != 0x40 )
      {
        v18 = -2;
        goto LABEL_18;
      }
      return 0LL;
    }
  }
  if ( !_bittest(v8, 0x1Eu) )
  {
    v13 = *v12;
    if ( (*(_BYTE *)(*v12 + 31) & 0x20) == 0 )
    {
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v13 + 104, a2) )
      {
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, *((_QWORD *)v7 + 14));
        v16 = xxxWindowHitTest(*((_QWORD *)v7 + 14), *(_QWORD *)&a2, (__int64)a3, a4);
        if ( v16 )
        {
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
          return v16;
        }
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
        v8 = v7 + 95;
      }
    }
  }
  LODWORD(v17) = *v8;
  if ( (*v8 & 0x40000000) != 0 || (v17 = PtiCurrent(v13), *((struct tagTHREADINFO **)v7 + 2) != v17) )
  {
    v18 = 1;
  }
  else
  {
    LODWORD(v17) = xxxSendTransformableMessageTimeout(
                     (struct tagTHREADINFO **)v7,
                     132LL,
                     0LL,
                     LOWORD(a2.x) | (LOWORD(v23.y) << 16),
                     0,
                     0,
                     0LL,
                     1u,
                     0);
    v18 = (int)v17;
    if ( (_DWORD)v17 == -1 )
      return 0LL;
  }
LABEL_18:
  if ( a3 )
    *a3 = v18;
  v20 = *((_QWORD *)v7 + 5);
  LOBYTE(v17) = ~*(_BYTE *)(v20 + 26);
  if ( v18 == (((unsigned int)v17 >> 6) & 1 | 0x10) && (*(_BYTE *)(v20 + 30) & 4) == 0 )
  {
    v21 = SizeBoxHwnd(v7, v20, v14, v15);
    if ( v21 )
      v7 = (signed __int32 *)v21;
  }
  return *(_QWORD *)v7;
}
