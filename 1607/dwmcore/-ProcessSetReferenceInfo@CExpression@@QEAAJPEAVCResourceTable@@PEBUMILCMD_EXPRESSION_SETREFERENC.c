/*
 * XREFs of ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x18008BBF0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x18008DB70 (-AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CExpression::ProcessSetReferenceInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETREFERENCEINFO *a3,
        char *a4)
{
  int v7; // ebx
  int v8; // r9d
  int v9; // r12d
  char *v10; // r15
  __int64 v11; // rax
  unsigned int v12; // ecx
  _OWORD *v13; // rax
  int v14; // eax
  unsigned int v15; // eax
  CResource **v16; // rdx
  int v17; // eax
  int v18; // edi
  unsigned int v20; // [rsp+20h] [rbp-38h]

  if ( *((_DWORD *)a3 + 2) )
  {
    v9 = 0;
    v10 = (char *)this + 472;
    while ( 1 )
    {
      v11 = *((unsigned int *)v10 + 6);
      v12 = v11 + 1;
      if ( (int)v11 + 1 < (unsigned int)v11 )
        break;
      if ( v12 > *((_DWORD *)v10 + 5) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet(v10, 32LL, 1LL, a4);
        v7 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
LABEL_11:
        if ( v7 < 0 )
        {
          v20 = 155;
          v8 = v7;
          goto LABEL_3;
        }
        goto LABEL_12;
      }
      v13 = (_OWORD *)(*(_QWORD *)v10 + 32 * v11);
      *v13 = *(_OWORD *)a4;
      v13[1] = *((_OWORD *)a4 + 1);
      *((_DWORD *)v10 + 6) = v12;
LABEL_12:
      if ( *((_BYTE *)this + 228) )
      {
        v15 = *((_DWORD *)a4 + 7);
        if ( v15 >= *((_DWORD *)this + 100) )
        {
          v18 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x195u);
          v7 = -2147024809;
LABEL_27:
          v20 = 163;
          v8 = v18;
          goto LABEL_3;
        }
        v16 = *(CResource ***)(*((_QWORD *)this + 47) + 16LL * v15 + 8);
        if ( v16 && *v16 && (v17 = CResource::AddSourceAnimation(*v16, this, *((_DWORD *)a4 + 1)), v18 = v17, v17 < 0) )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x19Eu);
        else
          v18 = 0;
        v7 = v18;
        if ( v18 < 0 )
          goto LABEL_27;
        *((_BYTE *)this + 276) = 1;
      }
      a4 += 32;
      if ( (unsigned int)++v9 >= *((_DWORD *)a3 + 2) )
      {
        if ( *((_BYTE *)this + 228) )
          *((_BYTE *)this + 276) = 1;
        return 0;
      }
    }
    v7 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_11;
  }
  v7 = -2003303421;
  v20 = 149;
  v8 = -2003303421;
LABEL_3:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v20);
  return (unsigned int)v7;
}
