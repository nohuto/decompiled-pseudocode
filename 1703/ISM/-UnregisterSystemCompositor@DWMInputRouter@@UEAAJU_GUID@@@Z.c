/*
 * XREFs of ?UnregisterSystemCompositor@DWMInputRouter@@UEAAJU_GUID@@@Z @ 0x180016640
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterSystemCompositor(__int64 this, struct _GUID *a2)
{
  unsigned int v2; // r11d
  unsigned int v3; // ebx
  __int64 v4; // r9
  unsigned int v5; // r8d
  __int64 v6; // r10

  v2 = *(_DWORD *)(this + 712);
  v3 = 0;
  v4 = this;
  v5 = 0;
  if ( v2 )
  {
    v6 = *(_QWORD *)(this + 704);
    while ( 1 )
    {
      this = 10LL * v5;
      if ( *(_QWORD *)(v6 + 80LL * v5) == *(_QWORD *)&a2->Data1
        && *(_QWORD *)(v6 + 80LL * v5 + 8) == *(_QWORD *)a2->Data4 )
      {
        break;
      }
      if ( ++v5 >= v2 )
        goto LABEL_6;
    }
    *(_OWORD *)(v6 + 80LL * v5) = *(_OWORD *)(v4 + 720);
    --*(_DWORD *)(v4 + 716);
  }
  else
  {
LABEL_6:
    v3 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(this, &MinInput_Warning_CheckResult, 0, 220, 5);
  }
  return v3;
}
