/*
 * XREFs of ?GetBufferSize@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140039890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetBufferSize(struct _RTL_CRITICAL_SECTION *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v5; // ebx

  v2 = this - 9;
  v5 = 0;
  EnterCriticalSection(this - 9);
  if ( a2 )
  {
    if ( LODWORD(this[-8].DebugInfo) )
      *a2 = LODWORD(this[-7].SpinCount) / LODWORD(this[-8].LockSemaphore);
    else
      v5 = -2005139437;
  }
  else
  {
    v5 = -2147467261;
  }
  LeaveCriticalSection(v2);
  if ( v5 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x1Au,
      (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
