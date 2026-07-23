/*
 * XREFs of KdpGetContextEx @ 0x14012E73C
 * Callers:
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpQuickMoveMemory @ 0x1406F23B8 (KdpQuickMoveMemory.c)
 *     KdpGetContext @ 0x1406F3240 (KdpGetContext.c)
 */

__int64 __fastcall KdpGetContextEx(_DWORD *a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // ebx
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  __int16 v10; // [rsp+20h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+28h] [rbp-10h]

  v2 = a1[4];
  v3 = a1[5];
  v10 = 56;
  v11 = a1;
  KdpGetContext(a1, a2);
  a1[6] = 0;
  if ( !a1[2] )
  {
    v6 = *a2;
    if ( v2 >= v6 )
      v2 = *a2;
    v7 = v6 - v2;
    if ( v3 > v7 )
      v3 = v7;
    if ( v2 && v3 )
      KdpQuickMoveMemory(*((_QWORD *)a2 + 1), *((_QWORD *)a2 + 1) + v2, v3);
    a1[4] = v2;
    a1[5] = *a2;
    a1[6] = v3;
    v8 = *a2;
    if ( v3 == v8 || v3 && v3 + v2 == v8 )
      KdpContextSent = 1;
    *a2 = v3;
  }
  return ((__int64 (__fastcall *)(__int64, __int16 *, unsigned __int16 *, __int128 *))KdSendPacket)(
           2LL,
           &v10,
           a2,
           &KdpContext);
}
