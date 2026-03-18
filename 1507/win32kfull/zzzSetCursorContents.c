/*
 * XREFs of zzzSetCursorContents @ 0x1C01E9D5C
 * Callers:
 *     NtUserSetCursorContents @ 0x1C021FE20 (NtUserSetCursorContents.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C00906F0 (zzzUpdateCursorImage.c)
 *     _DestroyCursor @ 0x1C00D9340 (_DestroyCursor.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetCursorContents(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( a1 != a2 )
  {
    if ( (*(_DWORD *)(a1 + 80) & 8) == 0 && (*(_DWORD *)(a2 + 80) & 8) == 0 )
    {
      v3 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
      v4 = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(a2 + 88) = v3;
      v5 = *(_QWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 96) = v4;
      v6 = *(_QWORD *)(a2 + 128);
      *(_QWORD *)(a2 + 96) = v5;
      v7 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 128) = v6;
      v8 = *(_QWORD *)(a2 + 104);
      *(_QWORD *)(a2 + 128) = v7;
      v9 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 104) = v8;
      LOWORD(v8) = *(_WORD *)(a2 + 84);
      *(_QWORD *)(a2 + 104) = v9;
      *(_WORD *)(a1 + 84) = v8;
      *(_WORD *)(a1 + 86) = *(_WORD *)(a2 + 86);
      *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 140);
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
      *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
      *(_WORD *)(a1 + 74) = *(_WORD *)(a2 + 74);
      *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
    }
    DestroyCursor((struct tagCURSOR *)a2, 2);
    if ( gpcurLogCurrent == a1 )
    {
      gpcurLogCurrent = 0LL;
      gpcurPhysCurrent = 0LL;
      zzzUpdateCursorImage();
    }
  }
  return 1LL;
}
