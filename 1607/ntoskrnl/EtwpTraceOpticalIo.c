/*
 * XREFs of EtwpTraceOpticalIo @ 0x1402271D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpGetScsiPassThroughCdb @ 0x1402264CC (EtwpGetScsiPassThroughCdb.c)
 */

char __fastcall EtwpTraceOpticalIo(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  ULONG_PTR *ScsiPassThroughCdb; // rax
  __int64 v9; // rax
  int v10; // eax
  __int16 v11; // r9
  int *v12; // rax
  char v13; // r10
  __int16 v14; // dx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // ecx
  int v18; // eax
  int v19; // r9d
  __int64 v20; // rax
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  int v26; // [rsp+30h] [rbp-29h] BYREF
  int v27; // [rsp+34h] [rbp-25h]
  int v28; // [rsp+38h] [rbp-21h]
  int v29; // [rsp+3Ch] [rbp-1Dh]
  ULONG_PTR *v30; // [rsp+40h] [rbp-19h]
  __int64 v31; // [rsp+48h] [rbp-11h]
  __int64 v32; // [rsp+50h] [rbp-9h]
  __int64 v33; // [rsp+58h] [rbp-1h]
  int v34; // [rsp+60h] [rbp+7h]
  _DWORD v35[2]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+70h] [rbp+17h]
  __int64 v37; // [rsp+78h] [rbp+1Fh]
  int v38; // [rsp+80h] [rbp+27h]
  int *v39; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v40; // [rsp+90h] [rbp+37h]

  v6 = *(_QWORD *)(a3 + 184);
  LOBYTE(ScsiPassThroughCdb) = *(_BYTE *)v6;
  if ( *(_BYTE *)v6 == 3 )
  {
    v14 = 311;
LABEL_23:
    v19 = *(_DWORD *)(a3 + 16);
    v28 = *(_DWORD *)(a3 + 56);
    v27 = v19;
    v26 = a2;
    v32 = a3;
    v30 = *(ULONG_PTR **)(v6 + 24);
    v20 = *(_QWORD *)(a3 + 152);
    v33 = a4;
    v29 = 0;
    if ( v20 )
      v21 = *(_DWORD *)(v20 + 1592);
    else
      v21 = -1;
    v34 = v21;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      v29 = 1;
    }
    else
    {
      v22 = a1 & 0xFFFFFF;
      if ( v22 == 5460546 || v22 == 5467492 )
        v29 = 2;
    }
    if ( (v19 & 8) != 0 )
    {
      v23 = *(_QWORD *)(a3 + 24);
      if ( !v23 )
        goto LABEL_36;
      v24 = *(_QWORD *)(v23 + 192);
    }
    else
    {
      v24 = *(_QWORD *)(a3 + 192);
    }
    if ( v24 )
    {
      v31 = *(_QWORD *)(v24 + 24);
      goto LABEL_38;
    }
LABEL_36:
    v31 = 0LL;
LABEL_38:
    v40 = 52LL;
    goto LABEL_39;
  }
  switch ( (_BYTE)ScsiPassThroughCdb )
  {
    case 4:
      v14 = 312;
      goto LABEL_23;
    case 9:
      v35[0] = a2;
LABEL_5:
      v35[1] = *(_DWORD *)(a3 + 16);
      v9 = *(_QWORD *)(a3 + 152);
      v36 = a4;
      v37 = a3;
      if ( v9 )
        v10 = *(_DWORD *)(v9 + 1592);
      else
        v10 = -1;
      v38 = v10;
      v11 = 313;
      v12 = v35;
      v40 = 28LL;
      goto LABEL_40;
    case 0xE:
      ScsiPassThroughCdb = EtwpGetScsiPassThroughCdb((IRP *)a3);
      if ( ScsiPassThroughCdb )
      {
        v13 = *(_BYTE *)ScsiPassThroughCdb;
        ScsiPassThroughCdb = (ULONG_PTR *)((*((unsigned __int8 *)ScsiPassThroughCdb + 5) | (unsigned __int64)((*((unsigned __int8 *)ScsiPassThroughCdb + 4) | ((*((unsigned __int8 *)ScsiPassThroughCdb + 3) | (*((unsigned __int8 *)ScsiPassThroughCdb + 2) << 8)) << 8)) << 8)) << 11);
        if ( ((v13 - 40) & 0x7F) != 0 )
        {
          if ( ((v13 - 42) & 0x7F) != 0 )
          {
            if ( v13 == 53 )
            {
              v35[0] = a2;
              goto LABEL_5;
            }
            return (char)ScsiPassThroughCdb;
          }
          v14 = 312;
        }
        else
        {
          v14 = 311;
        }
        v15 = *(_DWORD *)(a3 + 16);
        v30 = ScsiPassThroughCdb;
        v16 = *(_QWORD *)(a3 + 152);
        v27 = v15;
        v17 = *(_DWORD *)(a3 + 56);
        v26 = a2;
        v32 = a3;
        v28 = v17;
        v33 = a4;
        v29 = 0;
        v31 = 0LL;
        if ( v16 )
          v18 = *(_DWORD *)(v16 + 1592);
        else
          v18 = -1;
        v34 = v18;
        v40 = 28LL;
LABEL_39:
        v11 = v14;
        v12 = &v26;
LABEL_40:
        v39 = v12;
        LOBYTE(ScsiPassThroughCdb) = EtwTraceKernelEvent((int)&v39, 1, 0x80000001, v11, 4200451);
      }
      break;
  }
  return (char)ScsiPassThroughCdb;
}
