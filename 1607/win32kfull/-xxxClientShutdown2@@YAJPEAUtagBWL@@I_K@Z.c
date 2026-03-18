/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C0120F94
 * Callers:
 *     xxxClientShutdown @ 0x1C0120F14 (xxxClientShutdown.c)
 * Callees:
 *     DestroyWindowsTimers @ 0x1C0056A08 (DestroyWindowsTimers.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, int a2, __int64 a3)
{
  unsigned __int64 *v3; // rsi
  __int64 v5; // rdx
  _BOOL8 v6; // r9
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  _BOOL8 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rcx
  BOOL v13; // edi
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (unsigned __int64 *)((char *)a1 + 32);
  v5 = 264LL;
  v6 = (a3 & 0x108) == 264;
  v7 = (unsigned int)a3 & 0xC0000001;
  v8 = *((_QWORD *)a1 + 4);
  v9 = a3 & 0x100;
  if ( v8 == 1 )
    return 1LL;
  v10 = (a3 & 0x108) == 264;
  while ( 1 )
  {
    LOBYTE(v5) = 1;
    v11 = HMValidateHandleNoSecure(v8, v5, a3, v6);
    if ( v11 )
    {
      v12 = gptiCurrent;
      v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v15;
      v15[1] = v11;
      ++*(_DWORD *)(v11 + 8);
      if ( a2 == 17 )
      {
        v13 = gptiCurrent == gptiShutdownNotify || xxxSendMessage((struct tagWND *)v11, 0x11u, 0LL, v7) != 0;
      }
      else
      {
        xxxSendMessage((struct tagWND *)v11, 0x16u, v9 != 0, v7);
        v13 = 1;
        if ( v10 )
          DestroyWindowsTimers(v11);
      }
      ThreadUnlock1(v12, v5);
      if ( !v13 )
        break;
    }
    v8 = *++v3;
    if ( *v3 == 1 )
      return 1LL;
  }
  return 3LL;
}
