/*
 * XREFs of BgpDisplayCharacterGetContext @ 0x140728670
 * Callers:
 *     BgpConsoleInitialize @ 0x140728460 (BgpConsoleInitialize.c)
 *     BgpBcInitializeCriticalMode @ 0x1407D3ED8 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     BgpTxtCreateRegion @ 0x140726BC4 (BgpTxtCreateRegion.c)
 *     BgpTxtDestroyRegion @ 0x140728928 (BgpTxtDestroyRegion.c)
 */

__int64 __fastcall BgpDisplayCharacterGetContext(__int64 a1, _DWORD *a2, char a3)
{
  __int64 v3; // rbx
  __int64 Memory; // rdi
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v11[12]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  Memory = BgpFwAllocateMemory(0x20uLL);
  if ( Memory )
  {
    v8 = a2[1];
    v11[0] = *a2;
    v11[2] = v11[0];
    v10 = 0LL;
    v11[1] = v8;
    if ( (int)BgpTxtCreateRegion(&v10, v11, (_OWORD *)a1, &v12, a3) < 0 )
    {
      BgpFwFreeMemory(Memory);
      if ( v12 )
        BgpTxtDestroyRegion();
    }
    else
    {
      v3 = Memory;
      *(_QWORD *)(Memory + 12) = *(_QWORD *)a2;
      *(_DWORD *)(Memory + 20) = a2[2];
      *(_QWORD *)Memory = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(Memory + 8) = *(_DWORD *)(a1 + 16);
      *(_QWORD *)(Memory + 24) = v12;
    }
  }
  return v3;
}
