/*
 * XREFs of EtwpTraceFileName @ 0x14011A858
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall EtwpTraceFileName(__int64 a1, unsigned __int16 *a2, unsigned int a3, unsigned __int16 a4)
{
  unsigned int v5; // r8d
  __int16 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]
  unsigned int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  __int16 *v14; // [rsp+68h] [rbp-18h]
  __int64 v15; // [rsp+70h] [rbp-10h]

  v9 = a1;
  *(_QWORD *)&UserData.Size = 8LL;
  v5 = *a2;
  v15 = 2LL;
  v8 = 0;
  v13 = 0;
  if ( v5 > 0x2000 )
    v5 = 0x2000;
  v12 = v5;
  UserData.Ptr = (ULONGLONG)&v9;
  v11 = *((_QWORD *)a2 + 1);
  v14 = &v8;
  if ( (dword_1403277E0 & 0x200) != 0 )
  {
    if ( a4 == 1056 )
    {
      EtwWrite(EtwpFileProvRegHandle, &KFileEvt_NameCreate, 0LL, 3u, &UserData);
      return EtwTraceKernelEvent((int)&UserData, 3, 0x200u, a4, 4200450);
    }
    if ( a4 == 1059 )
      EtwWrite(EtwpFileProvRegHandle, &KFileEvt_NameDelete, 0LL, 3u, &UserData);
  }
  if ( a4 == 1060 )
    return (void *)EtwpLogKernelEvent((__int64)&UserData, a3, 3u, 0x424u, 4200450);
  return EtwTraceKernelEvent((int)&UserData, 3, 0x200u, a4, 4200450);
}
