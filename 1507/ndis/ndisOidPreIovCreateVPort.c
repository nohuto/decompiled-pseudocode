/*
 * XREFs of ndisOidPreIovCreateVPort @ 0x1C00DA370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C0037774 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     ndisIovCreateVPort @ 0x1C00D9748 (ndisIovCreateVPort.c)
 */

unsigned __int8 __fastcall ndisOidPreIovCreateVPort(_QWORD *a1)
{
  _DWORD *v1; // rsi
  unsigned __int8 VPort; // bl
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+28h] [rbp-10h]

  v1 = (_DWORD *)a1[4];
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qqq(0x28u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, *a1, a1[3], v1);
  if ( v1[1] == 12 )
  {
    VPort = 0;
    *((_DWORD *)a1 + 10) = 0;
    if ( v1[12] >= 0x23Cu )
    {
      if ( v1[13] < 0x23Cu )
      {
        v1[17] = 572;
        *((_DWORD *)a1 + 10) = -1073676266;
      }
    }
    else
    {
      v1[17] = 572;
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
      VPort = ndisIovCreateVPort((__int64)a1);
      goto LABEL_16;
    }
  }
  *((_DWORD *)a1 + 10) = -1073741637;
LABEL_15:
  VPort = 1;
LABEL_16:
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
  {
    v8 = *((_DWORD *)a1 + 10);
    LODWORD(v7) = VPort;
    WPP_SF_qqDD(0x29u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, *a1, a1[3], v7, v8);
  }
  return VPort;
}
