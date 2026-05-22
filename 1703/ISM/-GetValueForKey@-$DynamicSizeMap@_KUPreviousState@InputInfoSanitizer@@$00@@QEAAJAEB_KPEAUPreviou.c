/*
 * XREFs of ?GetValueForKey@?$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KPEAUPreviousState@InputInfoSanitizer@@@Z @ 0x18007F0AC
 * Callers:
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x18007E4D8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned __int64,InputInfoSanitizer::PreviousState,1>::GetValueForKey(
        __int64 a1,
        __int64 *a2,
        _OWORD *a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // edx
  __int64 v7; // r9
  _OWORD *v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm1

  v3 = *a2;
  v4 = 0;
  v5 = 0;
  if ( *a2 == *(_QWORD *)(a1 + 16) || !a3 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 116, 87);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 )
  {
    v7 = *(_QWORD *)a1;
    while ( 1 )
    {
      a1 = 536LL * v4;
      if ( *(_QWORD *)(a1 + v7) == v3 )
        break;
      if ( ++v4 >= v6 )
        goto LABEL_7;
    }
    v8 = (_OWORD *)(536LL * v4 + v7 + 8);
    v9 = 4LL;
    do
    {
      *a3 = *v8;
      a3[1] = v8[1];
      a3[2] = v8[2];
      a3[3] = v8[3];
      a3[4] = v8[4];
      a3[5] = v8[5];
      a3[6] = v8[6];
      a3 += 8;
      v10 = v8[7];
      v8 += 8;
      *(a3 - 1) = v10;
      --v9;
    }
    while ( v9 );
    *a3 = *v8;
  }
  else
  {
LABEL_7:
    v5 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 133, 5);
  }
  return v5;
}
