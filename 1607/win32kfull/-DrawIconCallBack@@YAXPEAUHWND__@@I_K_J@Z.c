/*
 * XREFs of ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F6B70
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F6C9C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F7C6C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall DrawIconCallBack(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // r14
  struct tagSwitchWndInfo *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct tagSwitchWndInfo *v16; // rsi
  int v17; // ebp
  unsigned __int64 *v18; // rbx
  __int64 i; // rax
  struct tagCURSOR *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-68h]
  _QWORD v24[4]; // [rsp+50h] [rbp-38h] BYREF

  LOBYTE(a2) = 1;
  v6 = HMValidateHandleNoSecure(a3, a2, a3, a4);
  v10 = v6;
  if ( v6 )
  {
    if ( (*(_BYTE *)(v6 + 55) & 0x10) != 0 )
    {
      LOBYTE(v7) = 1;
      v11 = HMValidateHandleNoSecure(a1, v7, v8, v9);
      if ( v11 )
      {
        v12 = Getpswi((struct tagWND *)v10);
        v16 = v12;
        if ( v12 )
        {
          v17 = 0;
          v18 = (unsigned __int64 *)(*((_QWORD *)v12 + 2) + 32LL);
LABEL_11:
          if ( *v18 != 1 )
          {
            LOBYTE(v13) = 1;
            for ( i = HMValidateHandleNoSecure(*v18, v13, v14, v15); ; i = *(_QWORD *)(i + 104) )
            {
              if ( !i )
              {
                ++v18;
                ++v17;
                goto LABEL_11;
              }
              if ( v11 == i )
                break;
            }
            if ( !a4 || (LOBYTE(v13) = 3, (v20 = (struct tagCURSOR *)HMValidateHandleNoRip(a4, v13, v14, v15)) == 0LL) )
              v20 = (struct tagCURSOR *)qword_1C0321A08;
            v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v24;
            ++*(_DWORD *)(v10 + 8);
            v24[1] = v10;
            xxxPaintIconsInSwitchWindow((struct tagWND *)v10, v16, 0LL, v17, v23, 1, 0, 0, v20);
            ThreadUnlock1(v22, v21);
          }
        }
      }
    }
  }
}
