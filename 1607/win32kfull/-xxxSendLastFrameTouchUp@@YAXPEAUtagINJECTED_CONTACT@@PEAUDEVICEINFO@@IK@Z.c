/*
 * XREFs of ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01D43F8
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01D4AF4 (xxxInjectTouchInput.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01D42A8 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01D452C (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 */

void __fastcall xxxSendLastFrameTouchUp(struct tagINJECTED_CONTACT *a1, struct DEVICEINFO *a2, unsigned int a3, int a4)
{
  _DWORD *v5; // rsi
  _DWORD *v6; // rcx
  __int64 v7; // r10
  __int64 v10; // rdi
  struct tagPOINTER_TOUCH_INFO *v11; // rbx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( a3 )
  {
    v5 = (_DWORD *)((char *)a1 + 8);
    v6 = (_DWORD *)((char *)a1 + 8);
    v7 = a3;
    v10 = 0LL;
    do
    {
      if ( ((*v6 - 0x20000) & 0xFFFDFFFF) != 0 )
        v10 = (unsigned int)(v10 + 1);
      v6 += 3;
      --v7;
    }
    while ( v7 );
    if ( (_DWORD)v10 )
    {
      v11 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuotaZInit(144 * v10, 1953067861LL);
      if ( v11 )
      {
        v13 = 0LL;
        v14 = 0;
        do
        {
          if ( ((*v5 - 0x20000) & 0xFFFDFFFF) != 0 )
          {
            v15 = 18 * v13;
            *((_DWORD *)v11 + 2 * v15 + 1) = v14;
            *((_QWORD *)v11 + v15 + 4) = *((_QWORD *)v5 - 1);
            if ( (*v5 & 4) != 0 )
              *((_DWORD *)v11 + 36 * v13 + 3) = 0x40000;
            else
              *((_DWORD *)v11 + 36 * v13 + 3) = 0x20000;
            *((_DWORD *)v11 + 36 * v13 + 3) |= 0x8000u;
            v13 = (unsigned int)(v13 + 1);
            *v5 = 0x20000;
          }
          ++v14;
          v5 += 3;
        }
        while ( v14 < a3 );
        PushW32ThreadLock((__int64)v11, v22, (__int64)Win32FreePool, v12);
        if ( a4 )
          v16 = _GetQpcBasedTouchStackTime() - a4;
        else
          v16 = 0;
        xxxSendToTouchStack(a2, v10, v11, v16);
        PopW32ThreadLock(v22, v17, v18, v19);
        Win32FreePool(v11, v20, v21);
      }
    }
  }
}
