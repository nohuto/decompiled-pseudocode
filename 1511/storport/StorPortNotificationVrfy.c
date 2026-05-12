/*
 * XREFs of StorPortNotificationVrfy @ 0x1C005A320
 * Callers:
 *     <none>
 * Callees:
 *     StorPortNotification @ 0x1C00059D0 (StorPortNotification.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 */

void __fastcall StorPortNotificationVrfy(
        int a1,
        _QWORD **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r9
  void *v14; // rcx
  _QWORD **v15; // [rsp+68h] [rbp+10h]
  __int64 v16; // [rsp+70h] [rbp+18h]

  v15 = a2;
  v16 = a3;
  v9 = 4096LL;
  if ( a1 <= 4096 )
  {
    if ( a1 != 4096 )
    {
      if ( !a1 )
      {
        if ( *(_BYTE *)(a3 + 2) == 40 )
          v14 = *(void **)(a3 + 104);
        else
          v14 = *(void **)(a3 + 56);
        memset(v14, 254, (*(_DWORD *)(**(a2 - 2) + 444LL) + 7) & 0xFFFFFFF8);
        a2 = v15;
        a3 = v16;
        v11 = 0LL;
        goto LABEL_26;
      }
      v10 = 3LL;
      switch ( a1 )
      {
        case 3:
          goto LABEL_35;
        case 6:
          v12 = 6LL;
          v13 = (unsigned int)a4;
          break;
        case 8:
          if ( (_BYTE)a4 != 0xFF )
          {
            StorPortNotification(8LL, a2, a3, (unsigned __int8)a4, (unsigned __int8)a5, (unsigned __int8)a6);
            return;
          }
          v12 = 8LL;
          v13 = 255LL;
          break;
        case 9:
          if ( (_BYTE)a3 == 0xFF )
            StorPortNotification(9LL, a2, 255LL);
          else
            StorPortNotification(9LL, a2, (unsigned __int8)a3, (unsigned __int8)a4, (unsigned __int8)a5);
          return;
        case 12:
          v11 = 12LL;
          goto LABEL_26;
        case 14:
          StorPortNotification(14LL, a2, (unsigned int)a3, a4);
          return;
        case 15:
          v11 = 15LL;
LABEL_26:
          StorPortNotification(v11, a2, a3);
          return;
        default:
          goto LABEL_34;
      }
      StorPortNotification(v12, a2, a3, v13);
      return;
    }
LABEL_43:
    StorPortNotification(v9, a2, a3, a4);
    return;
  }
  switch ( a1 )
  {
    case 4097:
      v9 = 4097LL;
      goto LABEL_43;
    case 4098:
      StorPortNotification(4098LL, a2, a3, a4, a5, a6);
      return;
    case 4099:
      StorPortNotification(4099LL, a2, (unsigned int)a3, a4, a5);
      return;
    case 4100:
      v11 = 4100LL;
      goto LABEL_26;
    case 4101:
      StorPortNotification(4101LL, a2, (unsigned int)a3, a4, a5, a6, a7, a8);
      return;
    case 4102:
      v9 = 4102LL;
      goto LABEL_43;
  }
  if ( a1 != 4103 )
  {
LABEL_34:
    v10 = (unsigned int)a1;
LABEL_35:
    StorPortNotification(v10, a2);
    return;
  }
  StorPortNotification(4103LL, a2, a3, a4, a5);
}
