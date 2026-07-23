/*
 * XREFs of BgpConsoleInitialize @ 0x140728460
 * Callers:
 *     <none>
 * Callees:
 *     BgpGetResolution @ 0x1400B3A5C (BgpGetResolution.c)
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     BgpConsoleSetPointSize @ 0x140141860 (BgpConsoleSetPointSize.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     BgpFoGetFontHandle @ 0x1407279B8 (BgpFoGetFontHandle.c)
 *     BgpDisplayCharacterGetContext @ 0x140728670 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleClearScreenEx @ 0x14072A364 (BgpConsoleClearScreenEx.c)
 *     BgpConsoleGetFontName @ 0x1407D4290 (BgpConsoleGetFontName.c)
 */

__int64 __fastcall BgpConsoleInitialize(unsigned __int16 a1, unsigned int a2, unsigned int a3)
{
  _DWORD *Memory; // rax
  _DWORD *Resolution; // rax
  __int64 v8; // r9
  int FontHandle; // eax
  unsigned int *v10; // rbx
  int v11; // edi
  _DWORD *v12; // rdi
  __int64 v13; // r8
  __int64 Context; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rcx
  unsigned int i; // r9d
  wchar_t *Str2[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v24[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v25; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-10h]
  int v27; // [rsp+54h] [rbp-Ch]

  BgpFwAcquireLock();
  Memory = (_DWORD *)BgpFwAllocateMemory(0x5E10uLL);
  qword_140329998 = (__int64)Memory;
  if ( !Memory )
  {
    v11 = -1073741801;
    goto LABEL_14;
  }
  *Memory = 80;
  Memory[1] = 25;
  Memory[2] |= a1;
  Memory[3] = a2;
  Memory[4] = a3;
  Resolution = BgpGetResolution(Str2);
  *(_QWORD *)(v8 + 20) = *(_QWORD *)Resolution;
  LODWORD(Resolution) = Resolution[2];
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 28) = (_DWORD)Resolution;
  *(_DWORD *)(v8 + 32) = 15;
  *(_DWORD *)(v8 + 48) = 12;
  *(_DWORD *)(v8 + 52) = 22;
  memset((void *)(v8 + 80), 0, 0x5DC0uLL);
  v24[0] = a3;
  v24[1] = a2;
  v27 = ((unsigned __int8)~(_BYTE)a1 >> 1) & 1;
  BgpConsoleGetFontName((unsigned int)dword_1402FA0E8, Str2);
  FontHandle = BgpFoGetFontHandle(Str2[0], &v25);
  v10 = (unsigned int *)qword_140329998;
  v11 = FontHandle;
  if ( FontHandle >= 0 )
  {
    v11 = BgpConsoleSetPointSize(
            *(_DWORD *)(qword_140329998 + 4),
            *(_DWORD *)qword_140329998,
            *(_DWORD *)(qword_140329998 + 24),
            *(_DWORD *)(qword_140329998 + 20),
            (__int64)v24,
            (__int64)Str2);
    if ( v11 >= 0 )
    {
      v12 = v10 + 12;
      v10[8] = v26;
      *((wchar_t **)v10 + 6) = Str2[0];
      v13 = 1LL;
      if ( (a1 & 4) == 0 )
        v13 = 3LL;
      Context = BgpDisplayCharacterGetContext(v24, v10 + 12, v13);
      v10 = (unsigned int *)qword_140329998;
      *(_QWORD *)(qword_140329998 + 40) = Context;
      if ( Context )
      {
        v15 = 0LL;
        v16 = *v10;
        v17 = v10[1];
        v10[15] = (v10[5] - (_DWORD)v16 * *v12) >> 1;
        v18 = v12[1] * v17;
        v19 = v10[6];
        v10[19] = 0;
        v10[17] = 0;
        v10[18] = 0;
        v20 = (v19 - v18) >> 1;
        v10[16] = v20;
        if ( (_DWORD)v16 )
        {
          do
          {
            for ( i = 0; i < v10[1]; v10[v16 + 20] = a2 )
            {
              v20 = 25LL * (unsigned int)v15 + i++;
              v16 = 3 * v20;
              LOWORD(v10[v16 + 22]) = 32;
              v10[3 * v20 + 21] = a3;
            }
            v15 = (unsigned int)(v15 + 1);
          }
          while ( (unsigned int)v15 < *v10 );
        }
        if ( (a1 & 1) != 0 )
          BgpConsoleClearScreenEx(v20, v16, v15);
        v11 = 0;
        goto LABEL_14;
      }
      v11 = -1073741823;
    }
  }
  if ( v10 )
  {
    BgpFwFreeMemory((__int64)v10);
    qword_140329998 = 0LL;
  }
LABEL_14:
  BgpFwReleaseLock();
  return (unsigned int)v11;
}
