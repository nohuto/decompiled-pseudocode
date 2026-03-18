/*
 * XREFs of ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x14026ED64
 * Callers:
 *     xxxInjectTouchInput @ 0x14029E10C (xxxInjectTouchInput.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1402612DC (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x14028A8E4 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 */

void __fastcall xxxSendLastFrameTouchUp(struct tagINJECTED_CONTACT *a1, struct DEVICEINFO *a2, __int64 a3, int a4)
{
  unsigned int v4; // ebp
  _DWORD *v5; // r14
  unsigned int v6; // ebx
  _DWORD *v7; // rcx
  unsigned int v8; // edi
  struct tagPOINTER_TOUCH_INFO *v11; // rsi
  unsigned int v12; // r9d
  unsigned int i; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct tagTHREADINFO *v16; // rax
  _QWORD v17[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( (_DWORD)a3 )
  {
    v4 = a3;
    v5 = (_DWORD *)((char *)a1 + 8);
    v6 = 0;
    v7 = (_DWORD *)((char *)a1 + 8);
    v8 = 0;
    a3 = (unsigned int)a3;
    do
    {
      if ( ((*v7 - 0x20000) & 0xFFFDFFFF) != 0 )
        ++v8;
      v7 += 3;
      --a3;
    }
    while ( a3 );
    if ( v8 )
    {
      v11 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuotaZInit(144LL * v8, 1953067861LL);
      if ( v11 )
      {
        v12 = 0;
        for ( i = 0; i < v4; ++i )
        {
          v14 = (unsigned int)(*v5 - 0x20000);
          if ( (v14 & 0xFFFDFFFF) != 0 )
          {
            v15 = 18LL * v12;
            *((_DWORD *)v11 + 2 * v15 + 1) = i;
            *((_QWORD *)v11 + v15 + 4) = *((_QWORD *)v5 - 1);
            v14 = (*v5 & 4) != 0 ? 0x40000 : 0x20000;
            LODWORD(v14) = v14 | 0x8000;
            *((_DWORD *)v11 + 2 * v15 + 3) = v14;
            ++v12;
            *v5 = 0x20000;
          }
          v5 += 3;
        }
        v16 = PtiCurrent(v14);
        v17[0] = *((_QWORD *)v16 + 47);
        *((_QWORD *)v16 + 47) = v17;
        v17[2] = Win32FreePool;
        v17[1] = v11;
        if ( a4 )
          v6 = _GetQpcBasedTouchStackTime() - a4;
        xxxSendToTouchStack(a2, v8, v11, v6);
        PopAndFreeW32ThreadLock((__int64)v17);
      }
    }
  }
}
