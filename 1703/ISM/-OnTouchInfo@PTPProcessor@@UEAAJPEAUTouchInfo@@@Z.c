/*
 * XREFs of ?OnTouchInfo@PTPProcessor@@UEAAJPEAUTouchInfo@@@Z @ 0x18005B420
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PTPProcessor::OnTouchInfo(PTPProcessor *this, struct TouchInfo *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  _DWORD *v8; // rax
  int v9; // r15d
  int v10; // r12d
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r9d
  int v15; // r14d
  INT16 *p_ScreenX; // rbx
  INT16 v17; // ax
  INT16 v18; // ax
  __int64 v19; // rcx
  _QWORD v21[2]; // [rsp+30h] [rbp-10h] BYREF
  int nNumerator; // [rsp+88h] [rbp+48h] BYREF
  int v23; // [rsp+90h] [rbp+50h] BYREF
  int v24; // [rsp+98h] [rbp+58h] BYREF

  v21[1] = -2LL;
  if ( (a2->Flags & 1) != 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 82) + 48LL))(
           *((_QWORD *)this + 82),
           7351489LL);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 202;
LABEL_5:
        Template_qqq(v5, &MinInput_Warning_CheckResult, 11, v7, v4);
        return v6;
      }
      return v6;
    }
  }
  v21[0] = 0LL;
  v8 = (_DWORD *)*((_QWORD *)this + 321);
  v9 = v8[9] - v8[7];
  v10 = v8[10] - v8[8];
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 56LL))(*((_QWORD *)this + 4));
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 88LL))(v11, v21);
  if ( v12 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_10;
    v14 = 232;
    goto LABEL_9;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(*(_QWORD *)v21[0] + 32LL))(v21[0], &nNumerator, &v23);
  if ( v12 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_10:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v14 = 236;
LABEL_9:
    Template_qqq(v13, &MinInput_Warning_CheckResult, 11, v14, v12);
    goto LABEL_10;
  }
  v15 = 0;
  if ( a2->ContactCount )
  {
    p_ScreenX = &a2->ContactArray[0].ScreenX;
    do
    {
      v17 = MulDiv(*p_ScreenX, nNumerator, v9);
      *p_ScreenX = v17;
      p_ScreenX[2] = v17;
      v18 = MulDiv(p_ScreenX[1], v23, v10);
      p_ScreenX[1] = v18;
      p_ScreenX[3] = v18;
      ++v15;
      p_ScreenX += 28;
    }
    while ( v15 < a2->ContactCount );
  }
  v19 = v21[0];
  v21[0] = 0LL;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct TouchInfo *))(**((_QWORD **)this + 82) + 32LL))(
         *((_QWORD *)this + 82),
         a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v6;
    v7 = 254;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 82) + 64LL))(*((_QWORD *)this + 82), &v24);
  v6 = v4;
  if ( v4 >= 0 )
  {
    *((_DWORD *)this + 152) = v24;
    *((_BYTE *)this + 620) = (a2->Flags & 4) != 0;
    *((_DWORD *)this + 154) = a2->InContactContactCount;
    return v6;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 255;
    goto LABEL_5;
  }
  return v6;
}
