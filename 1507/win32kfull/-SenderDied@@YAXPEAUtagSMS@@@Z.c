/*
 * XREFs of ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C007B418
 * Callers:
 *     SendMsgCleanup @ 0x1C007B270 (SendMsgCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall SenderDied(struct tagSMS *a1)
{
  __int64 v1; // r8
  int v2; // edx
  int v3; // eax
  __int64 v4; // rdx

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  if ( !v1 )
    v1 = *((_QWORD *)a1 + 8);
  *((_DWORD *)a1 + 21) |= 4u;
  *((_QWORD *)a1 + 4) = 0LL;
  v3 = *((_DWORD *)a1 + 21);
  if ( (v3 & 0x4000) != 0 )
  {
    v2 = 1;
    *((_DWORD *)a1 + 21) = v3 | 8;
  }
  if ( *(struct tagSMS **)(v1 + 464) == a1 )
    v2 = 1;
  if ( (*(_DWORD *)(v1 + 448) & 1) != 0 || !v2 )
  {
    v4 = *((unsigned int *)a1 + 21);
    if ( (v4 & 2) != 0 || (v4 & 9) == 1 )
      UnlinkSendListSms((__int64 *)a1, v4, v1);
    else
      *((_DWORD *)a1 + 21) = v4 | 8;
  }
  else
  {
    *((_DWORD *)a1 + 21) |= 1u;
    *((_QWORD *)a1 + 9) = 0LL;
    SetWakeBit(v1, 512LL);
  }
}
