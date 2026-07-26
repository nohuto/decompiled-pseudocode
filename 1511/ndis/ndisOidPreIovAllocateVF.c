/*
 * XREFs of ndisOidPreIovAllocateVF @ 0x1C00D36B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C0038468 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     ndisIovAllocateVF @ 0x1C00D2C68 (ndisIovAllocateVF.c)
 */

unsigned __int8 __fastcall ndisOidPreIovAllocateVF(_QWORD *a1)
{
  _DWORD *v1; // rsi
  unsigned __int8 VF; // bl
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+28h] [rbp-10h]

  v1 = (_DWORD *)a1[4];
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_qqq(0x1Du, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, *a1, a1[3], v1);
  if ( v1[1] == 12 )
  {
    VF = 0;
    *((_DWORD *)a1 + 10) = 0;
    if ( v1[12] >= 0x660u )
    {
      if ( v1[13] < 0x660u )
      {
        v1[17] = 1632;
        *((_DWORD *)a1 + 10) = -1073676266;
      }
    }
    else
    {
      v1[17] = 1632;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( *((_DWORD *)a1 + 10) )
      goto LABEL_15;
    v4 = *a1;
    if ( !*a1 )
      goto LABEL_16;
    v5 = *(_QWORD *)(v4 + 4672);
    if ( v5 && *(_QWORD *)(v4 + 3616) && (*(_BYTE *)(v5 + 8) & 3) == 3 )
    {
      VF = ndisIovAllocateVF((__int64)a1);
      goto LABEL_16;
    }
  }
  *((_DWORD *)a1 + 10) = -1073741637;
LABEL_15:
  VF = 1;
LABEL_16:
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
  {
    v8 = *((_DWORD *)a1 + 10);
    LODWORD(v7) = VF;
    WPP_SF_qqDD(0x1Eu, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, *a1, a1[3], v7, v8);
  }
  return VF;
}
