/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C012CF80
 * Callers:
 *     xxxClientShutdown @ 0x1C012CF00 (xxxClientShutdown.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     DestroyWindowsTimers @ 0x1C008B330 (DestroyWindowsTimers.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, int a2, int a3)
{
  unsigned __int64 *v3; // rsi
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // rbp
  _BOOL8 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  BOOL v12; // edi
  _QWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (unsigned __int64 *)((char *)a1 + 32);
  v5 = a3 & 0xC0000001;
  v6 = *((_QWORD *)a1 + 4);
  v7 = a3 & 0x100;
  if ( v6 == 1 )
    return 1LL;
  v8 = (a3 & 0x108) == 264LL;
  while ( 1 )
  {
    v10 = HMValidateHandleNoSecure(v6, 1);
    if ( v10 )
    {
      v11 = gptiCurrent;
      v14[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v14;
      v14[1] = v10;
      ++*(_DWORD *)(v10 + 8);
      if ( a2 == 17 )
      {
        v12 = gptiCurrent == gptiShutdownNotify || xxxSendMessage((struct tagWND *)v10, 0x11u, 0LL, v5) != 0;
      }
      else
      {
        xxxSendMessage((struct tagWND *)v10, 0x16u, v7 != 0, v5);
        v12 = 1;
        if ( v8 )
          DestroyWindowsTimers(v10);
      }
      ThreadUnlock1(v11, v9);
      if ( !v12 )
        break;
    }
    v6 = *++v3;
    if ( *v3 == 1 )
      return 1LL;
  }
  return 3LL;
}
