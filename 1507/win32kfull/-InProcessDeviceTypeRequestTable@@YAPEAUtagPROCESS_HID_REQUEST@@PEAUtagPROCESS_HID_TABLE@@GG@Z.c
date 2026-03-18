/*
 * XREFs of ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C0078B5C
 * Callers:
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0078960 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     PostDeviceNotification @ 0x1C00790B0 (PostDeviceNotification.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1C01D27BC (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 * Callees:
 *     <none>
 */

struct tagPROCESS_HID_REQUEST *__fastcall InProcessDeviceTypeRequestTable(
        struct tagPROCESS_HID_TABLE *a1,
        __int16 a2,
        __int16 a3)
{
  struct tagPROCESS_HID_REQUEST *v3; // r9
  struct tagPROCESS_HID_REQUEST *v5; // r10
  struct tagPROCESS_HID_REQUEST *result; // rax
  struct tagPROCESS_HID_REQUEST *v9; // rcx
  __int64 v10; // rdx
  struct tagPROCESS_HID_REQUEST **v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct tagPROCESS_HID_REQUEST **v14; // rdx
  struct tagPROCESS_HID_REQUEST *v15; // rdx
  struct tagPROCESS_HID_TABLE **v16; // rdx
  struct tagPROCESS_HID_TABLE *v17; // r8
  struct tagPROCESS_HID_TABLE *v18; // rcx
  struct tagPROCESS_HID_TABLE *v19; // r8
  struct tagPROCESS_HID_TABLE **v20; // rax
  struct tagPROCESS_HID_TABLE *v21; // rax

  v3 = (struct tagPROCESS_HID_TABLE *)((char *)a1 + 16);
  v5 = (struct tagPROCESS_HID_REQUEST *)*((_QWORD *)a1 + 2);
  result = v5;
  if ( v5 == (struct tagPROCESS_HID_TABLE *)((char *)a1 + 16) )
  {
LABEL_5:
    result = 0LL;
  }
  else
  {
    while ( *((_WORD *)result + 8) != a2 || *((_WORD *)result + 9) != a3 )
    {
      result = *(struct tagPROCESS_HID_REQUEST **)result;
      if ( result == v3 )
        goto LABEL_5;
    }
  }
  if ( result )
  {
    if ( v5 != result )
    {
      v10 = *(_QWORD *)result;
      v11 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)result + 1);
      if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)result + 8LL) != result || *v11 != result )
        __fastfail(3u);
      *v11 = (struct tagPROCESS_HID_REQUEST *)v10;
      *(_QWORD *)(v10 + 8) = v11;
      v12 = *(_QWORD *)v3;
      *(_QWORD *)result = *(_QWORD *)v3;
      *((_QWORD *)result + 1) = v3;
      if ( *(struct tagPROCESS_HID_REQUEST **)(v12 + 8) != v3 )
        __fastfail(3u);
      *(_QWORD *)(v12 + 8) = result;
      *(_QWORD *)v3 = result;
    }
  }
  else
  {
    v9 = (struct tagPROCESS_HID_TABLE *)((char *)a1 + 32);
    result = *(struct tagPROCESS_HID_REQUEST **)v9;
    if ( *(struct tagPROCESS_HID_REQUEST **)v9 == v9 )
    {
LABEL_8:
      result = 0LL;
    }
    else
    {
      while ( *((_WORD *)result + 8) != a2 )
      {
        result = *(struct tagPROCESS_HID_REQUEST **)result;
        if ( result == v9 )
          goto LABEL_8;
      }
    }
    if ( !result )
      return 0LL;
    if ( *(struct tagPROCESS_HID_REQUEST **)v9 != result )
    {
      v13 = *(_QWORD *)result;
      v14 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)result + 1);
      if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)result + 8LL) != result || *v14 != result )
        __fastfail(3u);
      *v14 = (struct tagPROCESS_HID_REQUEST *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      v15 = *(struct tagPROCESS_HID_REQUEST **)v9;
      *(_QWORD *)result = *(_QWORD *)v9;
      *((_QWORD *)result + 1) = v9;
      if ( *((struct tagPROCESS_HID_REQUEST **)v15 + 1) != v9 )
        __fastfail(3u);
      *((_QWORD *)v15 + 1) = result;
      *(_QWORD *)v9 = result;
    }
    v16 = (struct tagPROCESS_HID_TABLE **)((char *)a1 + 48);
    v17 = (struct tagPROCESS_HID_TABLE *)*((_QWORD *)a1 + 6);
    v18 = v17;
    if ( v17 == (struct tagPROCESS_HID_TABLE *)((char *)a1 + 48) )
    {
LABEL_26:
      v18 = 0LL;
    }
    else
    {
      while ( *((_WORD *)v18 + 8) != a2 || *((_WORD *)v18 + 9) != a3 )
      {
        v18 = *(struct tagPROCESS_HID_TABLE **)v18;
        if ( v18 == (struct tagPROCESS_HID_TABLE *)v16 )
          goto LABEL_26;
      }
    }
    if ( v18 )
    {
      if ( v17 != v18 )
      {
        v19 = *(struct tagPROCESS_HID_TABLE **)v18;
        v20 = (struct tagPROCESS_HID_TABLE **)*((_QWORD *)v18 + 1);
        if ( *(struct tagPROCESS_HID_TABLE **)(*(_QWORD *)v18 + 8LL) != v18 || *v20 != v18 )
          __fastfail(3u);
        *v20 = v19;
        *((_QWORD *)v19 + 1) = v20;
        v21 = *v16;
        *(_QWORD *)v18 = *v16;
        *((_QWORD *)v18 + 1) = v16;
        if ( *((struct tagPROCESS_HID_TABLE ***)v21 + 1) != v16 )
          __fastfail(3u);
        *((_QWORD *)v21 + 1) = v18;
        *v16 = v18;
      }
      return 0LL;
    }
  }
  return result;
}
