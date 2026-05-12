/*
 * XREFs of PortPassThroughFreeSrb @ 0x1C003CFE4
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C003D3CC (PortpCompleteRequestIrp.c)
 *     PortPassThroughSendAsync @ 0x1C00591D8 (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughFreeSrb(__int64 a1)
{
  unsigned int v2; // edi
  char v3; // r11
  void *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // r10
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  unsigned __int64 v11; // rcx
  void *v12; // rcx

  if ( *(_BYTE *)(a1 + 2) != 40 )
  {
    v12 = *(void **)(a1 + 32);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0x69506C50u);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    goto LABEL_21;
  }
  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  if ( !v2 )
    goto LABEL_21;
  while ( 1 )
  {
    v6 = *(unsigned int *)(a1 + 4 * v5 + 120);
    if ( (unsigned int)v6 >= 0x80 )
    {
      v7 = *(unsigned int *)(a1 + 16);
      if ( (unsigned int)v6 <= (unsigned int)v7 )
        break;
    }
LABEL_17:
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v2 )
      goto LABEL_10;
  }
  v8 = (unsigned int)v6;
  v9 = *(_DWORD *)(v6 + a1) - 64;
  if ( !v9 )
  {
    v11 = v8 + 40;
LABEL_14:
    if ( v11 <= v7 )
    {
      v4 = *(void **)(v8 + a1 + 16);
      v3 = 1;
    }
LABEL_16:
    if ( v3 )
      goto LABEL_10;
    goto LABEL_17;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = v8 + 56;
    goto LABEL_14;
  }
  if ( v10 != 1 || v8 + 40 > v7 )
    goto LABEL_16;
  v4 = *(void **)(v8 + a1 + 24);
LABEL_10:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x69506C50u);
LABEL_21:
  ExFreePoolWithTag((PVOID)a1, 0x69506C50u);
}
