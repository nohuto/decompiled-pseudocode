/*
 * XREFs of EtwpTraceFileName @ 0x14009EF04
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceFileName(__int64 a1, unsigned __int16 *a2, unsigned int a3, __int16 a4)
{
  unsigned int v5; // r8d
  __int16 v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+58h] [rbp-28h]
  unsigned int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  __int16 *v13; // [rsp+68h] [rbp-18h]
  __int64 v14; // [rsp+70h] [rbp-10h]

  v8 = a1;
  *(_QWORD *)&UserData.Size = 8LL;
  v5 = *a2;
  v14 = 2LL;
  v7 = 0;
  v12 = 0;
  if ( v5 > 0x2000 )
    v5 = 0x2000;
  v11 = v5;
  UserData.Ptr = (ULONGLONG)&v8;
  v10 = *((_QWORD *)a2 + 1);
  v13 = &v7;
  if ( (dword_1402FD520 & 0x200) != 0 )
  {
    if ( a4 == 1056 )
    {
      EtwWrite(EtwpFileProvRegHandle, &KFileEvt_NameCreate, 0LL, 3u, &UserData);
      goto LABEL_5;
    }
    if ( a4 == 1059 )
      EtwWrite(EtwpFileProvRegHandle, &KFileEvt_NameDelete, 0LL, 3u, &UserData);
  }
  if ( a4 != 1060 )
  {
LABEL_5:
    EtwTraceKernelEvent((int)&UserData, 3, 0x200u, a4, 4200450);
    return;
  }
  EtwpLogKernelEvent((__int64)&UserData, (__int64)a2, a3, 3u, 0x424u, 0x401802u);
}
