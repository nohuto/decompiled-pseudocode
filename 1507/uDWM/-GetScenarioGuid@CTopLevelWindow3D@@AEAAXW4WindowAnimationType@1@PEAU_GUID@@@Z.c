/*
 * XREFs of ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x180026574
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180025754 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025A60 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::GetScenarioGuid(__int64 a1, int a2, GUID *a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  GUID v8; // xmm0

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 == 1 )
              v8 = (GUID)xmmword_1800A3E18;
            else
              v8 = GUID_NULL;
          }
          else
          {
            v8 = (GUID)xmmword_1800A3E40;
          }
        }
        else
        {
          v8 = (GUID)xmmword_1800A4878;
        }
      }
      else
      {
        v8 = (GUID)xmmword_1800A3E28;
      }
    }
    else
    {
      v8 = (GUID)xmmword_1800A3E80;
    }
  }
  else
  {
    v8 = (GUID)xmmword_1800A3E08;
  }
  *a3 = v8;
}
