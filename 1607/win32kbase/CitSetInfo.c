/*
 * XREFs of CitSetInfo @ 0x1C0004FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C000FD00 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C00106DC (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0011A24 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C0011C30 (-CitpLastInputUpdate@@YAXEGI@Z.c)
 */

__int64 __fastcall CitSetInfo(int a1, unsigned int a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  __int64 result; // rax
  unsigned __int16 v5; // r14
  __int64 CurrentProcessWin32Process; // rbp
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned __int16 v10; // si
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int16 *v14; // rcx
  struct _CIT_INTERACTION_SUMMARY *v15; // rax
  __int64 v16; // rax
  unsigned __int16 v17; // [rsp+52h] [rbp+Ah]
  unsigned __int8 v18; // [rsp+58h] [rbp+10h]

  v18 = a2;
  v17 = HIWORD(a1);
  v2 = qword_1C011E5D0;
  if ( !qword_1C011E5D0 )
    return -1073741641LL;
  if ( (_BYTE)a1 != 1 )
    return -1073741821LL;
  v5 = HIWORD(a1);
  if ( (unsigned __int16)a2 == 64LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( (*(_QWORD *)&a2 & 0x10000LL) != 0 )
      CurrentProcessWin32Process = *((_QWORD *)v2 + 55);
    if ( CurrentProcessWin32Process )
    {
      if ( v17 >= 0x40u )
        v5 = 64;
      v7 = -1;
      if ( ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
         / 0x3E8 <= 0xFFFFFFFF )
        v7 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
           / 0x3E8;
      if ( v5 > v7 )
        v5 = v7;
      if ( v7 >= 0x40 )
      {
        v8 = *((_DWORD *)v2 + 226);
        if ( v7 - 63 > v8 )
        {
          v9 = v7 - 63 - v8;
          *((_DWORD *)v2 + 226) = v7 - 63;
          if ( v9 < 0x40 )
            *((_QWORD *)v2 + 112) >>= v9;
          else
            *((_QWORD *)v2 + 112) = 0LL;
        }
      }
      v10 = 0;
      if ( v7 > 0x40 )
        v7 = 64;
      v11 = 64 - v5;
      if ( v11 >= v7 )
        return 0LL;
      v12 = *((_QWORD *)v2 + 112);
      do
      {
        if ( (v12 & (1LL << v11)) == 0 )
        {
          v12 |= 1LL << v11;
          ++v10;
        }
        ++v11;
      }
      while ( v11 < v7 );
      *((_QWORD *)v2 + 112) = v12;
      if ( !v10 )
        return 0LL;
      LODWORD(result) = CitpProcessEnsureContext((struct tagPROCESSINFO *)CurrentProcessWin32Process);
      if ( (int)result < 0 )
        return (int)result;
      v13 = *(_QWORD *)(CurrentProcessWin32Process + 872);
      if ( CurrentProcessWin32Process == *((_QWORD *)v2 + 55) )
      {
        v14 = (unsigned __int16 *)((char *)v2 + 472);
        goto LABEL_39;
      }
      if ( (dword_1C011E5B0 & 1) != 0 )
      {
        v15 = CitpInteractionSummaryEnsure(v2, *(struct _CIT_PROCESS **)(CurrentProcessWin32Process + 872));
        if ( !v15 )
          return -1073741670LL;
        CitpStatIncrement((unsigned __int16 *)v15 + 18, v10);
      }
      if ( !byte_1C011E5C2 )
        return 0LL;
      v14 = (unsigned __int16 *)(v13 + 72);
LABEL_39:
      CitpStatIncrement(v14, v10);
      return 0LL;
    }
    return -1073741275LL;
  }
  if ( (*(_QWORD *)&a2 & 0x10000LL) != 0 )
  {
    v16 = *((_QWORD *)qword_1C011E5D0 + 55);
    goto LABEL_42;
  }
  v16 = PsGetCurrentProcessWin32Process();
  if ( v16 == *((_QWORD *)v2 + 55) )
  {
LABEL_42:
    if ( v16 )
    {
      CitpLastInputUpdate(v18, a2, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      return 0LL;
    }
    return -1073741275LL;
  }
  return -1073741637LL;
}
